function strip(string){
    string = string.toLowerCase()
    string = string.replace(/\W|\s/g,"")
    return string
}

function palindrome(string) {
    if (string.length == 0) {
        return true
    } else {
        if (string[0] == string[string.length-1]) {
            return palindrome(string.substr(1,string.length-2))
        }
        else {
            return false
        }
    }
}

let samplestring = "abcdefghidcba";
let samplestring2 = "abcdeffedcba";
console.info(samplestring)
console.info(palindrome(samplestring))
console.info(samplestring2)
console.info(palindrome(samplestring2))

let samplestring3 = "Madam, I'm Adam"
console.info(samplestring3)
console.info(palindrome(strip(samplestring3)))
