//1. using the new keyword
// const books = new Array("css", "html", "js", "node js");

//empty array
// const books2 = new Array();

// books2[0] = "css";
// books2[1] = "html";
// books2[3] = "js";

//2. Array literal

// const books3 = ["js", "react", "express", "redux"];

// const books3 = [];
//add record

// books3[0] = "Js";
// books3[1] = "react";
// books3[2] = "express";

//Arrays can take any data type value
// const arr = ["food", true, 20, null, undefined];

//------------------------
//Iterating over an array
//------------------------

// const books = ["mongodb", "Node JS", "react js", "CSS", "JSON"];

// for (let i = 0; i < books.length; i++) {
//   console.log(books[i]);
// }

//------------------------
// Array methods
//------------------------

// const books = ["mongodb", "Node JS", "react js", "CSS", "JSON"];

// //PUSH() Add a new record at the end
// books.push("HTML");

// //POP() Delete the last record
// books.pop();

// //UNSHIFT() Add a new record at the beginning
// books.unshift("novel");

// //SHIFT() Remove a record at the beginning
// books.shift();

// //indexOf() Throw the number of the record
// const res = books.indexOf("CSS");

// //lasrIndexOf() Return the index of the record
// console.log(books.lastIndexOf("CSS"));

// //Include()
// console.log(books.includes("CSS"));

// //Reverse()
// console.log(books.reverse());

//---------------Reduce()---------------
//Reduce return a single value, doesn´t mutate
//--------------------------------------
// const productQty = [12, 30, 100];

//arr.reduce(function(acc, currVal, currIdx, arr){

//}, initialVal;

//Fin the total qty in the array
// productQty.reduce(function (acc, currVal, idx, arr) {
//   console.log(`Accumulator ${acc}`);
//   console.log(`currVal ${currVal}`);
//   console.log(`Index ${idx}`);
//   console.log(`Array ${arr}`);
// }, 0);

// const ans = productQty.reduce(function (acc, currVal) {
//   return acc + currVal;
// }, 0);
// console.log(ans);

//----------------------------------------
//---------------find()-------------------
//----------------------------------------
// const agesArr = [10, 20, 30, 50, 24];

// //arr.find(function(data){
// //SYNTAX
// //}

// const res = agesArr.find(function (age) {
//   return age < 30;
// });

// console.log(res);

//----------------------------------------
//---------------filter()-----------------
//----------------------------------------
// const scoresArr = [20, 50, 60, 70, 20, 30, 50, 90, 24];

// //Find all scores above 50
// const ans = scoresArr.filter(function (score) {
//   return score > 50;
// });

// console.log(ans);

//-----------COGING CHALLENGE ON ARRAYS-------------
//1. Create an array of numbers, create a for loop that prints out the numbers in the array

// const numbers = [1, 2, 3, 4, 5, 6, 7, 8];

// for (let i = 0; i < numbers.length; i++) {
//   console.log(numbers[i]);
// }

//2. Create an array of strings, create a for loop that prints out the strings in the array, the strings should be in the following format: "This is string number: " + 1

// const strings = [1, 2, 3, 4, 5, 6, 7, 8, 9];
// for (let i = 0; i < strings.length; i++) {
//   console.log(strings[i] + " This is string number " + i);
// }

//3. Write a function to reverse an array, the function should take in an array and return the array in reverse order

// const str = ["This", "is", "my", "Array"];

// function reverse(arr) {
//   console.log(arr.reverse());
// }
// reverse(str);

//4. Write a function thar takes in an array of numbers and returns the sum of all the numbers in the array, the functon should take in an array and return the sum of all the numbers in the array

// const numbers = [1, 20, 50, 42, 100];

// function sum(num) {
//   const res = num.reduce(function (acc, currVal) {
//     return acc + currVal;
//   }, 0);
//   console.log(res);
// }
// sum(numbers);

//5. Write a function that takes in an array of numbers and returns the average of all the numbers in the array, the function should take in an array and return the average of all the numbers in the array, conver the result to 2 decimal places and add dollars signs at the beginning of the result

// const str = [5, 10, 6, 9, 12];

// function averageN(arr) {
//   const ans = arr.reduce(function (acc, currVal) {
//     return acc + currVal / arr.length;
//   }, 0);
//   return `$ ${ans.toFixed(2)}`;
// }

// console.log(averageN(str));

//6. Create a function to remove all duplicates value from an array, the function should take in an array and return a new array with al the duplicates removed

// const arrData = [2, 4, 5, 7, 3, 2, 6, 7, 3, 2, 5, 4];

// function removeDuplicates(arr) {
//   //Remove duplicates
//   const filteredData = arr.filter(function (el, idx, arr) {
//     return arr.indexOf(el) === idx;
//   });
//   return filteredData;
// }

// console.log(removeDuplicates(arrData));
// console.log(arrData);

//7. Write a function that  takes an array of words and returns a new array with only the words thar are three letters or shorter.

// const arrData = ["yes", "hello", "no", "guess", "lol"];

// function findThreeLetters(arr) {
//   return arr.filter(function (el, idx, arr) {
//     return el.length <= 3;
//   });
// }
// console.log(findThreeLetters(arrData));
