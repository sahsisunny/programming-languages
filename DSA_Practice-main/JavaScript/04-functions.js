const readInput = require('readline-sync');

// 1. Define two methods to print the maximum and the minimum number respectively among three numbers entered by the user.

function question1() {
     console.log("===============================--Define two methods to print the maximum and the minimum number respectively among three numbers entered by the user.--===============================");
     let num1 = readInput.questionInt("Enter the first number: ");
     let num2 = readInput.questionInt("Enter the second number: ");
     let num3 = readInput.questionInt("Enter the third number: ");

     function largestNumber(n1, n2, n3) {
          if (n1 >= n2 && n1 >= n3) {
               console.log(`The largest number is ${n1}`);
          } else if (n2 >= n1 && n2 >= n3) {
               console.log(`The largest number is ${n2}`);
          } else {
               console.log(`The largest number is ${n3}`);
          }
     }

     function smallestNumber(n1, n2, n3) {
          if (n1 <= n2 && n1 <= n3) {
               console.log(`The smallest number is ${n1}`);
          } else if (n2 <= n1 && n2 <= n3) {
               console.log(`The smallest number is ${n2}`);
          } else {
               console.log(`The smallest number is ${n3}`);
          }
     }

     largestNumber(num1, num2, num3);
     smallestNumber(num1, num2, num3);
}

// Define a program to find out whether a given number is even or odd.

function question2() {
     let num = readInput.questionInt("Enter the number: ");

     function oddOrEven(num) {
          if (num % 2 === 0) {
               console.log(`${num} is Even`);
          } else {
               console.log(`${num} is Odd`);
          }
     }
     oddOrEven(num);
}


// 3. A person is eligible to vote if his/her age is greater than or equal to 18. Define a method to find out if he/she is eligible to vote.

function question3() {
     let age = readInput.questionInt("Enter your Age : ");

     function isEligibleForVote(age) {
          if (age >= 18) {
               console.log("Your are elifible for vote..");
          } else {
               console.log("Oops! you are not eligible");
          }
     }
     isEligibleForVote(age);
}

// 4. Write a program to print the sum of two numbers entered by user by defining your own method.
function question4() {
     let num1 = readInput.questionInt("Enter the first number: ");
     let num2 = readInput.questionInt("Enter the second number: ");

     function addNum(num1, num2) {
          console.log(`Sum is ${num1 + num2}`);
     }
     addNum(num1, num2);
}


// 5. Define a method that returns the product of two numbers entered by user.
function question5() {
     let num1 = readInput.questionInt("Enter the first number: ");
     let num2 = readInput.questionInt("Enter the second number: ");
     function productOfNum() {
          console.log("Peoduct is ", num1 * num2);
     }
     productOfNum(num1, num2);
}

// 6. Write a program to print the circumference and area of a circle of radius entered by user by defining your own method.
function question6() {
     let radius = readInput.questionInt("Enter the Radius : ");
     const PI = 3.141
     function calcAreaOfCircle(radius) {
          let areaOfCircle = PI * (radius * radius);
          console.log(`Area of Circle is : ${areaOfCircle}`);
     }
     function calcCircumferenceOfCircle(radius) {
          let circumferenceOfCircle = 2 * PI * radius;
          console.log(`Circumference of Circle : ${circumferenceOfCircle}`);
     }

     calcAreaOfCircle(radius);
     calcCircumferenceOfCircle(radius);
}

question6();