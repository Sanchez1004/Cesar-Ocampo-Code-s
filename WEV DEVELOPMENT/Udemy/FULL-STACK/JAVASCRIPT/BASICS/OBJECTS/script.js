// 1. Object constructor function

//create
// const person = new Object();

//add properties
// person.name = "John";
// person.age = 30;
// person.isMarried = true;
// person.hobbies = ["Sport", "Cooking"];

// 2. Object literal syntax

// const person = {};

//add properties
// person.name = "John";
// person.age = 30;
// person.isMarried = true;
// person.hobbies = ["Sport", "Cooking"];

// const person = new Object({
//   name: "John",
//   age: 30,
//   hobbies: ["Sport", "Cooking"],
//   isMarried: true,
// });

//Object literal syntax

// const person = {};

//add properties
// person.name = "John";
// person.age = 30;
// person.hobbies = ["Sport", "Cooking"];
// person.isMarried = true;

// // // // // const person = {
// // // // //   name: "John",
// // // // //   age: 30,
// // // // //   isMarried: true,
// // // // //   hobbies: ["Sport", "Cook"],
// // // // // };

// // // // // person.anotherPropertiy = " i dont know";

// // // // // console.log(person.name);
// // // // // console.log(person.age);

//--------
//UPDATING OBJET PROPERTIES
//--------

// const person = {
//   name: "John",
//   age: 30,
//   isMarried: true,
//   hobbies: ["Cook", "Basket"],
// };

// person.name = "Billy";

//------
//DELETING OBJET PROPERTIES
//------

// const person = {
//   name: "John",
//   age: 30,
//   isMarried: true,
//   hobbies: ["Cook", "Basket"],
//   isAdmin: true,
//   status: "nor verified",
// };

// //Using the dot property
// delete person.age;

//Using the bracket notation
// delete person["hobbies"];

//-----
//ADDING METHODS TO OBJECT
//-----

// const person = {
//   firstName: "John",
//   lastName: "Doe",
//   age: 30,
//   isMarried: true,
//   hobbies: ["Cook", "Basket"],
//   isAdmin: true,
//   status: false,

//   printFullName: function () {
//     console.log(this.firstName + " " + this.lastName);
//   },

//   checkStatus: function () {
//     if (this.status == false) {
//       delete this.isAdmin;
//     }
//   },
// };

// // //add printFullName method to the object}

// // person.printFullName = function () {
// //   console.log(`Your full name is ${this.firstName} ${this.lastName}`);
// //   console.log(this.firstName + " " + this.lastName);
// // };

// // //how to call the function
// // person.printFullName();

//------
// This keyword
//------

// person.printFullName();
// person.checkStatus();
// console.log(person);

//-------------
//ITERATING OVER OBJECT PROPERTIES
//-------------
// const person = {
//   firstName: "John",
//   lastName: "Doe",
//   age: 30,
//   viewcount: 100,
//   isMarried: true,
//   hobbies: ["Cook", "Basket"],
//   isAdmin: true,
//   status: false,
// };

//1. for.. in loop
//2. objett.keys
//3. object.values
//4. object.entries

// FOR IN LOOP
// for (let key in person) {
//   console.log(key);
// }

// OBJECT.KEYS()
// const myKeys = Object.keys(person);

// const arr = [1, 4, 5, 2, 6, 1];

// arr.forEach(function (data) {
//   console.log(data);
// });

// myKeys.forEach(function (data) {
//   console.log(data);
// });

//OBJECT.VALUES()
// const objValues = Object.values(person);
// console.log(objValues);

//OBJECT.ENTRIES()
// const objEntries = Object.entries(person);
// console.log(objEntries);

// const objEntries2 = Object.entries(person);
// objEntries2.forEach(function (entry) {
//   console.log(entry);
// });

//Destructuring assignment

// objEntries.forEach(function ([key, value]) {
//   console.log(`${key}: ${value}`);
// });

//---------------CHALLENGES-------------

//CHALLENGE #1
// const user = {
//   name: "John",
//   age: 34,
//   location: "New York",
//   printInfo2: function () {
//     return `${this.name} is ${this.age} year sold`;
//   },
// };

// console.log(user.printInfo2());

//CHALLENGE #2
// const user = {
//   name: "John",
//   age: "30",
//   location: "New York",
//   married: false,

//   printInfo: function () {
//     console.log(`Name: ${this.name}\nAge: ${this.age}`);
//   },
//   isMarried: function () {
//     if (user.married == true) {
//       console.log(`${this.name} is already married`);
//     } else {
//       console.log(`${this.name} isn't married `);
//     }
//   },
// };

// user.printInfo();
// user.isMarried();

//CHALLENGE #3
const user = {
  name: "John",
  age: "30",
  location: "New York",
  married: false,
};

function printList(user) {
  Object.entries(user).forEach(function ([key, value]) {
    console.log(`${key}: ${value}`);
  });
}

function printList2(user) {
  for (let key in user) {
    console.log(`${key}: ${user[key]}`); //PERFECT ONE
  }
}
printList(user);
printList2(user);
