// // function sayHello() {
//   alert("Hello!");
//   console.log("Hello");
// }

// sayHello();

// function Hello(x, y) {
//   let result = x + y;
//   return result;
// }

// console.log(Hello(2,));

//---------- String Concatenation --------

// const str1 = "Cesar";
// const str2 = "Daniel";
// const result = str1 + " " + str2;

//concate method
// const result = str1.concat(" " + str2);

// console.log(result);

//Js Template Literals

//String Templates
//back tick syntax
//Template String

//Backtick Syntax

// const msg = `Good day brother`;
// const msg2 = `"Good evening"`:

//Multiline strings

// const msg = `
// Welcome to our aplication
// Try to make sure you have
// an
// account
// `;

//interpolate strings

// const age = 30;

// const welcome = `this is my age ${age}`;

//-------
//String length
//-------

// const lastName = "Cesar";

// const result = lastName.length;

// console.log(lastName.length);

//------------------------------------------------
//1. Funtion to know how many words has the string
//------------------------------------------------

// const x = "this is a string";
// const y = 20;

// function words_number(x) {
//   var str = x;
//   var nw = str.split(" ").length;
//   return nw;
// }

// console.log(words_number(x));

//------------------------------------------------
//2. Function to check if a string is longer than
//a certain number of characters
//------------------------------------------------

// function check_long(x, y) {
//   if (x.length > y) return true;
//   else return false;
// }

// console.log(check_long(x, y));

//------------------------------------------------
// trim / toUpperCase / toLowerCase / indexOf

// trim
// const str = "     Coding time  ";
// console.log("Without trim: " + str);
// console.log("Without trim: " + str.length);

// const res = str.trim();
// console.log("With trim   : " + res);
// console.log("With trim   : " + res.length);

// toUpperCase / toLowerCase
// const str = "Coding time";

// console.log(str.toUpperCase());
// console.log(str.toLowerCase());

// indexOf
// const str = "Cod!ng time";

// const res = str.indexOf("!");

// console.log(res);

//------------------------------------------------

//------------------------------------------------------
//1. Function to check if a string contains a whitespace
//------------------------------------------------------
// const Whitespace = "Hello Wordld";
// function isWhitespace(x) {
//   if (x > 0) return true;
//   else return false;
// }

// console.log(isWhitespace(Whitespace.indexOf(" ")));

//------------------------------------------------------
// const str = "you";
//-------
//Split()
//-------

// const res = str.split("");

// console.log(res);

//-------
//Join()
//-------

// const convertedStr = res.join("-");

// console.log(res);
// console.log(convertedStr);

//-------
//Reverse()
//-------

// const food = ["pizza", "cheese", "Rice", "Fufu"];
// console.log(food);

// const reversedArr = food.reverse();
// console.log(reversedArr);

function checkPalindrome(str) {
  const reverseString = str.split("").reverse().join("");
  if (str == reverseString) console.log("It is a palindrome");
  else console.log("It is not a palindrome");
}

const str = prompt("Enter a string: ");
checkPalindrome(str);
//---------------------------------------------------
// CODING CHALLENGE #3
//---------------------------------------------------
// const str = "I love programming and coffee";
// const character = "/";

//Function to separate a string any character
// function separateStr(x, c) {
//   STR = x.split(" ");
//   return STR.join(c);
// }

// console.log(separateStr(str, character));

//Function to reverse a string
// function reverseSTR(x) {
//   STR = x.split(" ");
//   return STR.reverse();
// }

// console.log(reverseSTR(str));

//--------
//REPEAT()
//........

// const str = "Welcome to my house\n";

// const res = str.repeat(5);
// console.log(res);

//---------------------------
//Function to repeat a string

// const str = "Repeat me please\n";

// function repeatSTR(x, y) {
//   if (y <= 0) return "The number is less or equal than 0" || false;
//   else return x.repeat(y) || true;
// }

// console.log(repeatSTR(str, 10));

//------------
//StartWith()
//------------

// const str = "Welcome";
// const strTo = "W";

// function startWith(x, y) {
//   if (x.startsWith(y) == true) return "The strig stars with " + y;
//   else return "String doesn't start with " + y;
// }
// console.log(startWith(str, strTo));

//------------
//EndsWith()
//------------

// const str = "Welcome to Colombia";
// const strTo = "g";

// function end_str(x, y) {
//   if (x.endsWith(y) == true) return "The strings end with " + y.toUpperCase();
//   else return "The strings doesn't end with " + y.toUpperCase();
// }

// console.log(end_str(str, strTo));

//--------------------------------
//Includes()
//--------------------------------

// const str = "Are you a developer full stack and working";
// const strCh = "fulls";

// const res = str.includes("your");
// const res2 = str.includes("you", 4);

// console.log(res);
// console.log(res2);

// function findIn(x, y) {
//   if (x.includes(y) == false) return "The string doesn't includes the word " + y;
//   else return "The string includes the word " + y;
// }

// console.log(findIn(str, strCh));

//-----------
// Slice()
//-----------

// const str = "Welcome to javascript methods";
// const strAmount = 10;

// const res = str.slice(2, 6);
// console.log(res);

// function toSlice(x, y) {
//   return x.slice(y);
// }
// console.log(toSlice(str, strAmount));

//-----------------------------
//String Comparison
//-----------------------------

// console.log("a" < "b");
// console.log("a" < "A");
// console.log("Glow" < "Glee");

//compare string of different types

// console.log("a" > 2);
// console.log("5" < 5);
// console.log("5" == 5);

//Comare boolean values

// console.log(true == 1);
// console.log(false == 0);

//Compare null and undefined

// console.log(null == undefined);
