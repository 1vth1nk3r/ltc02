function checkPunctuation(char) //like checking if this char is punctuation mark (not really \W)
{
    return char == " " || char == "." || char == "," || char == "?" || char == "!" || char == "(" || char == ")" || char == ":" || char == ";" || char == "'" || char == "\""
}

function palindrome(string) {
    //console.info(string)
    if (string.length == 0) {
        return true
    } else {
        if (checkPunctuation(string[0])) { //if first character of the string is punctuation try without it
            return palindrome(string.substr(1,string.length-1))
        } else if (checkPunctuation(string[string.length-1])) { //if last character of the string is punctuation try without it
            return palindrome(string.substr(0,string.length-1))
        } else {
            if (string[0] == string[string.length-1]) {
               return palindrome(string.substr(1,string.length-2))
            }
            else {
               return false
            }
        }
    }
}


/*
let samplestring = "abcdefghidcba";
let samplestring2 = "abcdeffedcba";
console.info(samplestring)
console.info(palindrome(samplestring))
console.info(samplestring2)
console.info(palindrome(samplestring2))
*/

let samplestring3 = "Madam, I'm Adam"
console.info(samplestring3)
console.info(palindrome(samplestring3.toLowerCase()))
