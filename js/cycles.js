let arr = [1,1,2,3,5,8,13,21]
let sum = 0
let count = 0
let multiply = 1

while (count < arr.length) {
    sum += arr[count]
    count++
}

console.info("Array elements sum is " + sum)

for (count = 0; count < arr.length; count += 2) {
    multiply *= arr[count]
}

console.info("Product of even elements of is " + multiply)