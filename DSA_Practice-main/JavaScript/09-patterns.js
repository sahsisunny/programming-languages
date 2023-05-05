const readInput = require('readline-sync');

function print(message) {
     process.stdout.write(message);
}
function read(question) {
     return readInput.question(question);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

/*
     Pattern 1
     *****
     *****
     *****
     *****
     *****
*/

function pattern1() {
     const line = read("Enter the LINE: ");
     const star = read("Enter the STAR: ");
     for (let row = 0; row < line; row++) {
          for (let column = 0; column < star; column++) {
               print("*");
          }
          print('\n');
     }
}

/*
     Pattern 2
     *
     **
     ***
     ****
     *****
*/

function pattern2() {
     const line = read("Enter the Number: ");
     for (let row = 0; row <= line; row++) {
          for (let column = 0; column < row; column++) {
               print('*')
          }
          print('\n')
     }
}

/*
     Pattern 3
     *****
     ****
     ***
     **
     *
*/

function pattern3() {
     const line = read("Enter the Number: ");
     for (let row = 0; row <= line; row++) {
          for (let column = row; column < line; column++) {
               print('*');
          }
          print('\n');
     }
}

/*
Pattern 4
     1
     1 2
     1 2 3
     1 2 3 4
     1 2 3 4 5
*/

function pattern4() {
     const line = read("Enter the Number: ");
     for (let row = 1; row <= line; row++) {
          for (let column = 1; column <= row; column++) {
               print(`${column} `);
          }
          print(`\n`);
     }
}

/*
     Pattern 5
     *    
     **   
     ***  
     **** 
     *****
     **** 
     ***  
     **   
     *
*/

function pattern5() {
     const line = read("Enter the Number: ");
     for (let row = 1; row <= line; row++) {
          if (row < line / 2) {
               for (let column = 1; column <= row; column++) {
                    print(`*`);
               }
          } else if (row >= line / 2) {
               for (let column = row; column <= line; column++) {
                    print(`*`);
               }
          }
          print(`\n`);
     }
}

/*
     Pattern 6
         *
        **
       ***
      ****
     *****
*/

function pattern6() {
     // const line = read("Enter the Number: ");
     const line = 5;
     for (let row = 0; row < line; row++) {
          for (let column = row; column <= line; column++) {
               print(' ');
          }
          for (let column = 0; column <= row; column++) {
               print('*');
          }
          print('\n');
     }
}
/*
     Pattern 7
     *****
      ****
       ***
        **
         *
*/

function pattern7() {
     // const line = read("Enter the Number: ");
     const line = 5;
     for (let row = 0; row < line; row++) {
          for (let column = 0; column <= row; column++) {
               print(' ');
          }
          for (let column = row; column < line; column++) {
               print('*');
          }
          print('\n');
     }
}

