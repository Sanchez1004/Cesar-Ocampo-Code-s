//-----
//Math Functions
//-----

// 1. Math.abs(x)
// const ans = Math.abs(10);

// 2. Math.round()
// const ans = Math.round(5.2);

// 3. Math.ceil()
// const ans = Math.ceil(5.5);

// 4. Math.floor()
// const ans = Math.floor(5.5);

// 5. Math.sqrt()
// const ans = Math.sqrt(25);

// 6. Math.pow()
// const ans = Math.pow(2, 3);

// 7. Math.min()
// const ans = Math.min(2, 4);

// 8. Math.max()
// const ans = Math.max(1, 10);

// 9. Math.random()
// const ans = Math.random();
// console.log(ans);
//get random number between 2 numbers
//Math.random() * (max - min + 1) +  min;
// const rand = Math.floor(Math.random() * (20 - 10 + 1) + 10);
// console.log(rand);

//---------------------------------
// CHALLENGE #1
//---------------------------------
// const number = [200, 4];

// function maxNumber(n1, n2) {
//   console.log(`The largest number is: ${Math.max(n1, n2)}`);
// }

// maxNumber(number[0], number[1]);

//---------------------------------
// CHALLENGE #2
//---------------------------------
// const number = [200, 4];

// function minNumber(n1, n2) {
//   console.log(`The shortest number is: ${Math.min(n1, n2)}`);
// }

// minNumber(number[0], number[1]);

//---------------------------------
// CHALLENGE #3
//---------------------------------
// const number1 = 16;
// const number2 = 15;

// function avrgNumber(n1, n2) {
//   return Math.floor((n1 + n2) / 2);
// }

// console.log(avrgNumber(number1, number2));

//---------------------------------
// CHALLENGE #4
//---------------------------------
// const number1 = 100;
// const number2 = 20;

// function randomNumber(min, max) {
//   const result = Math.random() * (max - min + 1) + min;
//   return Math.round(result);
// }

// console.log(randomNumber(number1, number2));

//---------------------------------
// CHALLENGE #5
//---------------------------------
function guessNumber() {
    let number = prompt("please guess a number from 1-10");
    let randomNumber = Math.round(Math.random() * (10 - 1 + 1) + 1);
    console.log(randomNumber);
    if (number == (randomNumber)) {
        return alert("CORRECT");
    }
    else {
        return alert("TRY AGAIN")
    }
}
guessNumber();