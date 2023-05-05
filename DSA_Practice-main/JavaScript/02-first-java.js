const readInput = require('readline-sync');


// 1. Write a program to print whether a number is even or odd, also take input from the user.
function oddOrEven() {
     console.log("===============================--Odd or Even--================================");
     const num = readInput.questionInt("Enter the Number: ")
     if (num % 2 === 0) {
          console.log(`${num} is EVEN.`)
     } else if (num % 2 != 0) {
          console.log(`${num} is ODD.`)
     }
}


// 2. Take name as input and print a greeting message for that particular name.
function greetWithName() {
     console.log("===============================--Greet with Name--================================");
     const name = readInput.question("Enter the Name: ");
     console.log(`Hello ${name}!`);
}


// 3. Write a program to input principal, time, and rate (P, T, R) from the user and find Simple Interest.
function calcSI() {
     console.log("===============================--Simple Interest--================================");
     const principleAmount = readInput.questionFloat("Enter the Principle Amount: ");
     const timePeriod = readInput.questionFloat("Enter the Time Period: ");
     const rateofInterest = readInput.questionFloat("Enter the Rate of interest: ");
     let SI = (principleAmount * rateofInterest * timePeriod) / 100;
     let TotalAmount = principleAmount + SI;
     console.log(`Simple Interest = ${SI}`);
     console.log(`Total Amount = ${TotalAmount}`);
}

// 4. Take in two numbers and an operator (+, -, *, /) and calculate the value.(Use if conditions)
function calculator() {
     console.log("===============================--Calculator--================================");
     const num1 = readInput.questionFloat("Enter the 1st Number: ")
     const num2 = readInput.questionFloat("Enter the 2nd Number: ")
     const operator = readInput.question("Enter the Operator(+, -, *, /): ")
     let result = 0;
     if (operator === "+") {
          result = num1 + num2;
          console.log(`Sum is : ${result}`);
     } else if (operator === "-") {
          result = num1 - num2;
          console.log(`Subtraction is : ${result}`);
     } else if (operator === "*") {
          result = num1 * num2;
          console.log(`Multiplication is : ${result}`);
     } else if (operator === "/") {
          result = num1 / num2;
          console.log(`Division is : ${result}`);
     }
     else {
          console.log("Enter the valid operator value!");
     }
}


// 5. Take 2 numbers as input and print the largest number.
function largestNumber() {
     console.log("===============================--Largest Number--================================");
     const num1 = readInput.questionFloat("Enter the 1st Number: ")
     const num2 = readInput.questionFloat("Enter the 2nd Number: ")
     if (num1 > num2) {
          console.log(`${num1} is the largest number.`);
     } else if (num1 < num2) {
          console.log(`${num2} is the largest number.`);
     } else {
          console.log(`Both ${num1} and ${num2} are equals.`);
     }
}


// 6. Input currency in rupees and output in USD.
function currencyConvetor() {
     console.log("===============================--Currency Convertor--================================");
     const rupee = readInput.questionFloat("Enter the Rupees: ");
     const USD = (rupee / 82.49).toFixed(2);
     console.log(`USD : ${USD}`);
}


// 7. To calculate Fibonacci Series up to n numbers.
function calcFibonacciSeries() {
     console.log("===============================--Fibonacci Series--================================");
     let fibonacci = 0;
     let num2 = 1;
     let nextTerm;
     const endPoint = readInput.questionInt("Enter the Ending Number: ")
     process.stdout.write("Fibonacci Series : ");
     for (let i = 0; i < endPoint; i++) {
          process.stdout.write(`${fibonacci}, `);
          nextTerm = fibonacci + num2
          fibonacci = num2;
          num2 = nextTerm;
     }
}


// 8. To find out whether the given String is Palindrome or not.
function checkPalindrome() {
     console.log("===============================--Palindrome--================================");
     const text = (readInput.question("Enter the Text: ")).toLowerCase();
     const revText = text.toLowerCase().split('').reverse().join('');
     if (text === revText) {
          console.log(`"${text}" is Palindrome.`);
     } else {
          console.log(`"${text}" is not Palindrome.`);
     }
}


// 9. To find Armstrong Number between two given number.
function isArmstrong() {
     console.log("===============================--Armstrong Number--================================");
     const num = readInput.questionInt("Enter the Number: ");
     const numStr = num.toString();
     const numLen = numStr.length;
     sum = 0;
     for (let i = 0; i < numLen; i++) {
          sum += Math.pow(Number(numStr[i]), numLen);
     }
     if (sum === num) {
          console.log(`${num} is Armstrong Number.`);
     } else {
          console.log(`${num} is not Armstrong Number.`);
     }
}


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
function showQuestions() {
     console.log("=================================--First Java Program--=================================================");
     console.log("========================================================================================================");
     console.log("1. Write a program to print whether a number is even or odd, also take input from the user.");
     console.log("2. Take name as input and print a greeting message for that particular name.");
     console.log("3. Write a program to input principal, time, and rate(P, T, R) from the user and find Simple Interest.");
     console.log("4. Take in two numbers and an operator(+, -, *, /) and calculate the value. (Use if conditions)");
     console.log("5. Take 2 numbers as input and print the largest number.");
     console.log("6. Input currency in rupees and output in USD.");
     console.log("7. To calculate Fibonacci Series up to n numbers.");
     console.log("8. To find out whether the given String is Palindrome or not.");
     console.log("9. To find Armstrong Number between two given number.");
     console.log("========================================================================================================");
     const option = readInput.questionInt("Enter the Option: ")
     switch (option) {
          case 1:
               oddOrEven();
               break;
          case 2:
               greetWithName();
               break;
          case 3:
               calcSI();
               break;
          case 4:
               calculator();
               break;
          case 5:
               largestNumber();
               break;
          case 6:
               currencyConvetor();
               break;
          case 7:
               calcFibonacciSeries();
               break;
          case 8:
               checkPalindrome();
               break;
          case 9:
               isArmstrong();
               break;
          default:
               console.log("Enter the valid option!");
               break;
     }
}

while (true) {
     showQuestions();
     const choice = readInput.question("Do you want to continue? (y/n): ");
     if (choice === "n") {
          break;
     }
}