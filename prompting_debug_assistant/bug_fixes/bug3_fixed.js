function sumArray(arr) {
    let sum = 0;
    for (let i = 0; i < arr.length; i++) {
        sum += arr[i];
    }
    return sum;
}

let nums = [5, 10, 15, 20];
console.log("Sum is:", sumArray(nums));

let moreNums = [1, 2, 3];
console.log("Sum is:", sumArray(moreNums));