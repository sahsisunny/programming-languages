public class ControlStatements {
     public static void main(String[] args) {
          // Main Method

          // Calling method
          ifStatement();
          ifElseStatement();
          ifElseIfStatement();
          switchStatement();
          whileLoop();
          doWhileLoop();
          forLoop();
          breakStatement();
          continueStatement();
          returnStatement();

     }

     // Conditional Statements
     static void ifStatement() {
          int a = 10;
          int b = 20;
          if (a > b) {
               System.out.println("a is greater than b");
          } else {
               System.out.println("a is less than or equal to b");
          }
     }

     static void ifElseStatement() {
          int a = 10;
          int b = 20;
          if (a > b) {
               System.out.println("a is greater than b");
          } else if (a < b) {
               System.out.println("a is less than b");
          } else {
               System.out.println("a is equal to b");
          }
     }

     static void ifElseIfStatement() {
          int a = 10;
          int b = 20;
          if (a > b) {
               System.out.println("a is greater than b");
          } else if (a < b) {
               System.out.println("a is less than b");
          } else if (a == b) {
               System.out.println("a is equal to b");
          } else {
               System.out.println("a is not equal to b");
          }
     }

     static void switchStatement() {
          int a = 10;
          switch (a) {
               case 10:
                    System.out.println("a is 10");
                    break;
               case 20:
                    System.out.println("a is 20");
                    break;
               default:
                    System.out.println("a is not 10 or 20");
          }
     }

     // Looping Statements
     static void forLoop() {
          for (int i = 0; i < 10; i++) {
               System.out.println("i = " + i);
          }
     }

     static void whileLoop() {
          int i = 0;
          while (i < 10) {
               System.out.println("i = " + i);
               i++;
          }
     }

     static void doWhileLoop() {
          int i = 0;
          do {
               System.out.println("i = " + i);
               i++;
          } while (i < 10);
     }

     static void forEachLoop() {
          int[] arr = { 1, 2, 3, 4, 5 };
          for (int i : arr) {
               System.out.println("i = " + i);
          }
     }

     // Jump Statements
     static void breakStatement() {
          for (int i = 0; i < 10; i++) {
               if (i == 5) {
                    break;
               }
               System.out.println("i = " + i);
          }
     }

     static void continueStatement() {
          for (int i = 0; i < 10; i++) {
               if (i == 5) {
                    continue;
               }
               System.out.println("i = " + i);
          }
     }

     static void returnStatement() {
          int a = 10;
          int b = 20;
          int c = a + b;
          System.out.println("Sum of " + a + " and " + b + " is: " + c);
          return;
     }


}