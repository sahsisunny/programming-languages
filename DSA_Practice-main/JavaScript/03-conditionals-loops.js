     const readInput = require('readline-sync');

// 1. Area of Circle
function areaOfCircle() {
     console.log("===============================--Area Of Circle--================================");
     const radius = readInput.questionFloat("Enter the Radius: ");
     let area = (3.14 * radius * radius).toFixed(2);
     console.log(`Area of Circle = ${area}`);
}

// 2. Area of Triangle
function areaOfTriangle() {
     console.log("===============================--Area Of Triangle--================================");
     const height = readInput.questionFloat("Enter the Height: ");
     const base = readInput.questionFloat("Enter the Base: ");
     let area = ((height * base) / 2).toFixed(2);
     console.log(`Area of Triangle = ${area}`);
}

// 3. Area of Rectangle
function areaOfRectangle() {
     console.log("===============================--Area Of Rectangle--================================");
     const height = readInput.questionFloat("Enter the Height: ");
     const width = readInput.questionFloat("Enter the Width: ");
     let area = (height * width).toFixed(2);
     console.log(`Area of Rectangle = ${area}`);
}

// 4. Area of Isosceles Triangle
function areaOfIsoscelesTriangle() {
     console.log("===============================--Area Of Isosceles Triangle--================================");
     const height = readInput.questionFloat("Enter the Height: ");
     const base = readInput.questionFloat("Enter the Base: ");
     let area = ((height * base) / 2).toFixed(2);
     console.log(`Area of Isosceles Triangle = ${area}`);
}

// 5. Area of Parallelogram
function areaOfPalallelogram() {
     console.log("===============================--Area Of Palallelogram--================================");
     const height = readInput.questionFloat("Enter the Height: ");
     const base = readInput.questionFloat("Enter the Base: ");
     let area = (height * base).toFixed(2);
     console.log(`Area of Palallelogram = ${area}`);
}

// 6. Area of Rhombus
function areaOfRhombus() {
     console.log("===============================--Area Of Rhombus--================================");
     const diagonal = readInput.questionFloat("Enter the Diagonal: ");
     const diagonal2 = readInput.questionFloat("Enter the Diagonal2: ");
     let area = (diagonal * diagonal2).toFixed(2);
     console.log(`Area of Rhombus = ${area}`);
}

// 7. Area of Equilateral Triangle
function areaOfEquilateralTriangle() {
     console.log("===============================--Area Of Equilateral Triangle--================================");
     const side = readInput.questionFloat("Enter the Side: ");
     let area = ((Math.sqrt(3) / 4) * (side * side)).toFixed(2);
     console.log(`Area of Equilateral Triangle = ${area}`);
}

// 8. Perimeter of Circle
function perimeterOfCircle() {
     console.log("===============================--Perimeter Of Circle--================================");
     const radius = readInput.questionFloat("Enter the Radius: ");
     let perimeter = (2 * 3.14 * radius).toFixed(2);
     console.log(`Perimeter of Circle = ${perimeter}`);
}

// 9. Perimeter of Equilateral Triangle
function perimeterOfEquilateralTriangle() {
     console.log("===============================--Perimeter Of Equilateral Triangle--================================");
     const side = readInput.questionFloat("Enter the Side: ");
     let perimeter = (3 * side).toFixed(2);
     console.log(`Perimeter of Equilateral Triangle = ${perimeter}`);
}

// 10. Perimeter of Parallelogram
function perimeterOfParallelogram() {
     console.log("===============================--Perimeter Of Parallelogram--================================");
     const side = readInput.questionFloat("Enter the Side: ");
     const side2 = readInput.questionFloat("Enter the Side2: ");
     let perimeter = (2 * (side + side2)).toFixed(2);
     console.log(`Perimeter of Parallelogram = ${perimeter}`);
}

// 11. Perimeter of Rectangle
function perimeterOfRectangle() {
     console.log("===============================--Perimeter Of Rectangle--================================");
     const side = readInput.questionFloat("Enter the Side: ");
     const side2 = readInput.questionFloat("Enter the Side2: ");
     let perimeter = (2 * (side + side2)).toFixed(2);
     console.log(`Perimeter of Rectangle = ${perimeter}`);
}

// 12. Perimeter of Square
function perimeterOfSquare() {
     console.log("===============================--Perimeter Of Square--================================");
     const side = readInput.questionFloat("Enter the Side: ");
     let perimeter = (4 * side).toFixed(2);
     console.log(`Perimeter of Square = ${perimeter}`);
}

// 13. Perimeter of Rhombus
function perimeterOfRhombus() {
     console.log("===============================--Perimeter Of Rhombus--================================");
     const side = readInput.questionFloat("Enter the Side: ");
     let perimeter = (4 * side).toFixed(2);
     console.log(`Perimeter of Rhombus = ${perimeter}`);
}

// 14. Volume of Cone
function volumeOfCone() {
     console.log("===============================--Volume Of Cone--================================");
     const radius = readInput.questionFloat("Enter the Radius: ");
     const height = readInput.questionFloat("Enter the Height: ");
     let volume = ((1 / 3) * 3.14 * (radius * radius) * height).toFixed(2);
     console.log(`Volume of Cone = ${volume}`);
}

// 15. Volume of Prism
function volumeOfPrism() {
     console.log("===============================--Volume Of Prism--================================");
     const height = readInput.questionFloat("Enter the Height: ");
     const base = readInput.questionFloat("Enter the Base: ");
     let volume = (height * base).toFixed(2);
     console.log(`Volume of Prism = ${volume}`);
}

// 16. Volume of Cylinder
function volumeOfCylinder() {
     console.log("===============================--Volume Of Cylinder--================================");
     const radius = readInput.questionFloat("Enter the Radius: ");
     const height = readInput.questionFloat("Enter the Height: ");
     let volume = (3.14 * (radius * radius) * height).toFixed(2);
     console.log(`Volume of Cylinder = ${volume}`);
}

// 17. Volume of Sphere
function volumeOfSphere() {
     console.log("===============================--Volume Of Sphere--================================");
     const radius = readInput.questionFloat("Enter the Radius: ");
     let volume = ((4 / 3) * 3.14 * (radius * radius * radius)).toFixed(2);
     console.log(`Volume of Sphere = ${volume}`);
}

// 18. Volume of Pyramid
function volumeOfPyramid() {
     console.log("===============================--Volume Of Pyramid--================================");
     const height = readInput.questionFloat("Enter the Height: ");
     const base = readInput.questionFloat("Enter the Base: ");
     let volume = ((1 / 3) * (base * height)).toFixed(2);
     console.log(`Volume of Pyramid = ${volume}`);
}

// 19. Curved Surface Area of Cylinder
function curvedSurfaceAreaOfCylinder() {
     console.log("===============================--Curved Surface Area Of Cylinder--================================");
     const radius = readInput.questionFloat("Enter the Radius: ");
     const height = readInput.questionFloat("Enter the Height: ");
     let curvedSurfaceArea = (2 * 3.14 * radius * height).toFixed(2);
     console.log(`Curved Surface Area of Cylinder = ${curvedSurfaceArea}`);
}

// 20. Total Surface Area of Cylinder
function totalSurfaceAreaOfCube() {
     console.log("===============================--Total Surface Area Of Cube--================================");
     const side = readInput.questionFloat("Enter the Side: ");
     let totalSurfaceArea = (6 * (side * side)).toFixed(2);
     console.log(`Total Surface Area of Cube = ${totalSurfaceArea}`);
}

// 21. Fibonacci Series
function fibonacciSeries() {
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

// 22. Subtract the product and sum of digits of an integer

function subtractProductAndSum() {
     console.log("===============================--Subtract the product and sum of digits of an integer--================================");
     let num = readInput.questionInt("Enter the Number: ");
     let sum = 0;
     let product = 1;
     let numStr = num.toString();
     let numLength = numStr.length;
     for (let i = 0; i < numLength; i++) {
          let numStrToInt = parseInt(numStr[i]);
          sum += numStrToInt;
          product *= numStrToInt;
     }
     console.log(`Subtract the product and sum of digits of an integer = ${product - sum}`);
}

// 23. Input a number and print all the factors of that number (use loops).
function printAllFactors() {
     console.log("===============================--Print all the factors of that number--================================");
     let num = readInput.questionInt("Enter the Number: ");
     let factors = [];
     for (let i = 1; i <= num; i++) {
          if (num % i == 0) {
               factors.push(i);
          }
     }
     console.log(`Factors of ${num} are : ${factors}`);
}

// 24. Take integer inputs till the user enters 0 and print the sum of all numbers (HINT: while loop)
function sumOfAllNumbers() {
     console.log("===============================--Sum of all numbers--================================");
     let sum = 0;
     let num = readInput.questionInt("Enter the Number: ");
     while (num != 0) {
          sum += num;
          num = readInput.questionInt("Enter the Number: ");
     }
     console.log(`Sum of all numbers = ${sum}`);
}

// 25. Take integer inputs till the user enters 0 and print the largest number from all.
function largestNumber() {
     console.log("===============================--Largest Number--================================");
     let num = readInput.questionInt("Enter the Number: ");
     let largest = 0;
     while (num != 0) {
          if (num > largest) {
               largest = num;
          }
          num = readInput.questionInt("Enter the Number: ");
     }
     console.log(`Largest Number = ${largest}`);
}

// 26. Addition of two numbers
function additionOfTwoNumbers() {
     console.log("===============================--Addition of two numbers--================================");
     let num1 = readInput.questionInt("Enter the First Number: ");
     let num2 = readInput.questionInt("Enter the Second Number: ");
     let sum = num1 + num2;
     console.log(`Addition of two numbers = ${sum}`);
}

// Function to show all the basic programs
function showBasicQuestions() {
     console.log("========================================================================================================");
     console.log("=================================--Basic Java Programs--=================================================");
     console.log("1. Area Of Circle Java Program");
     console.log("2. Area Of Triangle");
     console.log("3. Area Of Rectangle Program ");
     console.log("4. Area Of Isosceles Triangle ");
     console.log("5. Area Of Parallelogram");
     console.log("6. Area Of Rhombus");
     console.log("7. Area Of Equilateral Triangle");
     console.log("8. Perimeter Of Circle");
     console.log("9. Perimeter Of Equilateral Triangle");
     console.log("10. Perimeter Of Parallelogram");
     console.log("11. Perimeter Of Rectangle");
     console.log("12. Perimeter Of Square");
     console.log("13. Perimeter Of Rhombus");
     console.log("14. Volume Of Cone Java Program");
     console.log("15. Volume Of Prism");
     console.log("16. Volume Of Cylinder");
     console.log("17. Volume Of Sphere");
     console.log("18. Volume Of Pyramid");
     console.log("19. Curved Surface Area Of Cylinder");
     console.log("20. Total Surface Area Of Cube");
     console.log("21. Fibonacci Series In Java Programs");
     console.log("22. Subtract the Product and Sum of Digits of an Integer");
     console.log("23. Input a number and print all the factors of that number (use loops).");
     console.log("24. Take integer inputs till the user enters 0 and print the sum of all numbers (HINT: while loop)");
     console.log("25. Take integer inputs till the user enters 0 and print the largest number from all.");
     console.log("26. Addition Of Two Numbers");
     console.log("========================================================================================================");
     const basicQuestion = readInput.questionInt("Enter the Question Number: ");
     switch (basicQuestion) {
          case 1:
               areaOfCircle();
               break;
          case 2:
               areaOfTriangle();
               break;
          case 3:
               areaOfRectangle();
               break;
          case 4:
               areaOfIsoscelesTriangle();
               break;
          case 5:
               areaOfParallelogram();
               break;
          case 6:
               areaOfRhombus();
               break;
          case 7:
               areaOfEquilateralTriangle();
               break;
          case 8:
               perimeterOfCircle();
               break;
          case 9:
               perimeterOfEquilateralTriangle();
               break;
          case 10:
               perimeterOfParallelogram();
               break;
          case 11:
               perimeterOfRectangle();
               break;
          case 12:
               perimeterOfSquare();
               break;
          case 13:
               perimeterOfRhombus();
               break;
          case 14:
               volumeOfCone();
               break;
          case 15:
               volumeOfPrism();
               break;
          case 16:
               volumeOfCylinder();
               break;
          case 17:
               volumeOfSphere();
               break;
          case 18:
               volumeOfPyramid();
               break;
          case 19:
               curvedSurfaceAreaOfCylinder();
               break;
          case 20:
               totalSurfaceAreaOfCube();
               break;
          case 21:
               fibonacciSeries();
               break;
          case 22:
               subtractProductAndSum();
               break;
          case 23:
               printAllFactors();
               break;
          case 24:
               sumOfAllNumbers();
               break;
          case 25:
               largestNumber();
               break;
          case 26:
               additionOfTwoNumbers();
               break;
          default:
               console.log("Invalid Input");
               break;
     }
}

// ---------------------------------------------------------------------------------------------------------------------------


// 1. Factorial Program In Java
function factorial() {
     console.log("===============================--Factorial Program In Java--================================");
     let num = readInput.questionInt("Enter the Number: ");
     let factorial = 1;
     for (let i = 1; i <= num; i++) {
          factorial = factorial * i;
     }
     console.log(`Factorial of ${num} = ${factorial}`);
}

// 2. Calculate Electricity Bill
function calculateElectricityBill() {
     console.log("===============================--Calculate Electricity Bill--================================");
     let units = readInput.questionInt("Enter the Units: ");
     let bill = 0;
     if (units <= 50) {
          bill = units * 0.50;          // 0.50 is the rate of per unit if units are less than 50
     } else if (units <= 150) {
          bill = 50 * 0.50 + (units - 50) * 0.75;      // 0.75 is the rate of per unit if units are less than 150
     } else if (units <= 250) {
          bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;       // 1.20 is the rate of per unit if units are less than 250
     } else {
          bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;         // 1.50 is the rate of per unit if units are greater than 250
     }
     console.log(`Electricity Bill = ${bill}`);
}

// 3. Calculate Average Of N Numbers
function calculateAverageOfNNumbers() {
     console.log("===============================--Calculate Average Of N Numbers--================================");
     let num = readInput.questionInt("Enter the Number: ");
     let sum = 0;
     let average = 0;
     for (let i = 1; i <= num; i++) {
          let number = readInput.questionInt(`Enter the ${i} Number: `);
          sum = sum + number;
     }
     average = sum / num;
     console.log(`Average of ${num} Numbers = ${average}`);
}

// 4. Calculate Discount Of Product
function calculateDiscountOfProduct() {
     console.log("===============================--Calculate Discount Of Product--================================");
     let price = readInput.questionInt("Enter the Price: ");
     let discount = readInput.questionInt("Enter the Discount: ");
     let discountPrice = (price * discount) / 100;
     let finalPrice = price - discountPrice;
     console.log(`Discount Price = ${discountPrice}`);
     console.log(`Final Price = ${finalPrice}`);
}

// 5. Calculate Distance Between Two Points
function calculateDistanceBetweenTwoPoints() {
     console.log("===============================--Calculate Distance Between Two Points--================================");
     let x1 = readInput.questionInt("Enter the X1: ");
     let y1 = readInput.questionInt("Enter the Y1: ");
     let x2 = readInput.questionInt("Enter the X2: ");
     let y2 = readInput.questionInt("Enter the Y2: ");
     let distance = Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2));
     console.log(`Distance Between Two Points = ${distance}`);
}

// 6. Calculate Commission Percentage  
function calculateCommissionPercentage() {
     console.log("===============================--Calculate Commission Percentage--================================");
     let sales = readInput.questionInt("Enter the Sales: ");
     let commission = 0;
     if (sales >= 0 && sales <= 5000) {
          commission = sales * 2 / 100;           // 2 is the commission percentage if sales are less than 5000
     } else if (sales >= 5001 && sales <= 10000) {
          commission = sales * 5 / 100;           // 5 is the commission percentage if sales are less than 10000
     } else if (sales >= 10001 && sales <= 20000) {
          commission = sales * 7 / 100;           // 7 is the commission percentage if sales are less than 20000
     } else {
          commission = sales * 10 / 100;          // 10 is the commission percentage if sales are greater than 20000
     }
     console.log(`Commission = ${commission}`);
}

// 7. Power In Java 
function power() {
     console.log("===============================--Power In Java--================================");
     let base = readInput.questionInt("Enter the Base: ");
     let exponent = readInput.questionInt("Enter the Exponent: ");
     let power = 1;
     for (let i = 1; i <= exponent; i++) {
          power = power * base;
     }
     console.log(`Power = ${power}`);
}

// 8. Calculate Depreciation of Value   // Depreciation - विकलांगता
function calculateDepreciationOfValue() {
     console.log("===============================--Calculate Depreciation of Value--================================");
     let cost = readInput.questionInt("Enter the Cost: ");
     let salvage = readInput.questionInt("Enter the Salvage: ");
     let life = readInput.questionInt("Enter the Life: ");
     let depreciation = (cost - salvage) / life;
     console.log(`Depreciation = ${depreciation}`);
}

// 9. Calculate Batting Average
function calculateBattingAverage() {
     console.log("===============================--Calculate Batting Average--================================");
     let runs = readInput.questionInt("Enter the Runs: ");
     let innings = readInput.questionInt("Enter the Innings: ");
     let notOut = readInput.questionInt("Enter the Not Out: ");
     let battingAverage = runs / (innings - notOut);
     console.log(`Batting Average = ${battingAverage}`);
}

// 10. Calculate CGPA Java Program
function calculateCGPA() {
     console.log("===============================--Calculate CGPA Java Program--================================");
     let totalMarks = readInput.questionInt("Enter the Total Marks: ");
     let obtainedMarks = readInput.questionInt("Enter the Obtained Marks: ");
     let cgpa = (obtainedMarks / totalMarks) * 10;
     console.log(`CGPA = ${cgpa}`);
}

// 11. Compound Interest Java Program

function compoundInterest() {
     console.log("===============================--Compound Interest Java Program--================================");
     let initialPrincipalBalance = readInput.questionInt("Enter the Initial Principal Balance: ");
     let interestRate = readInput.questionInt("Enter the Interest Rate: ");
     let numberOfTimesInterestAppliedPerTimePeriod = readInput.questionInt("Enter the Number Of Times Interest Applied Per Time Period: ");
     let timePeriod = readInput.questionInt("Enter the Time Period: ");
     let finalAmount = initialPrincipalBalance * Math.pow((1 + (interestRate / numberOfTimesInterestAppliedPerTimePeriod)), (numberOfTimesInterestAppliedPerTimePeriod * timePeriod));     console.log(`Final Amount = ${finalAmount}`);
}

compoundInterest();
// Function to show Intermediate Questions
function showIntermediateQuestions() {
     console.log("=================================--Intermediate Java Programs--=================================================");
     console.log("1. Factorial Program In Java");
     console.log("2. Calculate Electricity Bill");
     console.log("3. Calculate Average Of N Numbers");
     console.log("4. Calculate Discount Of Product");
     console.log("5. Calculate Distance Between Two Points ");
     console.log("6. Calculate Commission Percentage");
     console.log("7. Power In Java");
     console.log("8. Calculate Depreciation of Value");
     console.log("9. Calculate Batting Average");
     console.log("10. Calculate CGPA Java Program");
     console.log("11. Compound Interest Java Program");
     console.log("12. Calculate Average Marks");
     console.log("13. Sum Of N Numbers");
     console.log("14. Armstrong Number In Java");
     console.log("15. Find Ncr & Npr");
     console.log("16. Reverse A String In Java");
     console.log("17. Find if a number is palindrome or not ");
     console.log("18. Future Investment Value");
     console.log("19. HCF Of Two Numbers Program");
     console.log("20. LCM Of Two Numbers");
     console.log("21. Java Program Vowel Or Consonant ");
     console.log("22. Perfect Number In Java");
     console.log("23. Check Leap Year Or Not");
     console.log("24. Sum Of A Digits Of Number");
     console.log("25. Kunal is allowed to go out with his friends only on the even days of a given month. Write a program to count the number of days he can go out in the month of August.");
     console.log("26. Write a program to print the sum of negative numbers, sum of positive even numbers and the sum of positive odd numbers from a list of numbers (N) entered by the user. The list terminates when the user enters a zero.");
     console.log("========================================================================================================");

     const intermediateQuestion = readInput.questionInt("Enter the Question Number: ");
     switch (intermediateQuestion) {
          case 1:
               factorial();
               break;
          case 2:
               calculateElectricityBill();
               break;
          case 3:
               calculateAverageOfNNumbers();
               break;
          case 4:
               calculateDiscountOfProduct();
               break;
          case 5:
               calculateDistanceBetweenTwoPoints();
               break;
          case 6:
               calculateCommissionPercentage();
               break;
          case 7:
               power();
               break;
          case 8:
               calculateDepreciationOfValue();
               break;
          case 9:
               calculateBattingAverage();
               break;
          case 10:
               calculateCGPA();
               break;
          case 11:
               compoundInterest();
          default:
               console.log("Invalid Input");
               break;
     }
}

// For Showing Both Options
function showBothOptions() {
     console.log("=================================--Choose Any One--=================================================");
     console.log("1. Basic Java Programs");
     console.log("2. Intermediate Java Programs");
     console.log("3. Exit");
     console.log("======================================================================================================");

     const option = readInput.questionInt("Enter the Option Number: ");
     switch (option) {
          case 1:
               showBasicQuestions();
               break;
          case 2:
               showIntermediateQuestions();
               break;
          case 3:
               console.log("Thank You");
               break;
          default:
               console.log("Invalid Input");
               break;
     }
}

// Run the Program Continuously until the user wants to exit
// while (true) {
//      showBothOptions();
//      const choice = readInput.question("Do you want to continue (y/n): ");
//      if (choice === "n") {
//           break;
//      }
// }