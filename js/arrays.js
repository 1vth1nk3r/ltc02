let arrNum = [1, 5, 3, 6]
let arrStr = ["abc", "cbd", "fgt"]

console.info(arrNum)
console.info(arrStr)

console.info("Length of arrNum: " + arrNum.length)
console.info("Length of arrStr: " + arrStr.length)

console.info("The second element of arrNum: " + arrNum[1])
console.info("The last element of arrStr: " + arrStr[arrStr.length - 1])

arrNum.unshift(8);
console.info("arrNum with a new element at the beginning " + arrNum)
arrStr.push('poi', 'rtyu');
console.info("arrStr with new elements at the end " + arrStr)

arrNum.splice(3, 1)
console.info("arrNum without the fourth element " + arrNum)

let arrMixed = arrNum.concat(arrStr)
console.info("new array containing two preveous ones " + arrMixed)

let arrNumNew = []

function addthree(item) {
    arrNumNew.push(item + 3)
}

arrNum.forEach(addthree)
console.info("new array same length as the arrNum made by calling function on each element " + arrNumNew)
