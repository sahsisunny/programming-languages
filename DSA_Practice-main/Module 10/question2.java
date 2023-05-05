import java.util.Scanner;

public class question2 {
     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          System.out.print("Enter the number: ");
          int num = sc.nextInt();

          if (isEven(num)) {
               System.out.println("Number is EVEN.");
          } else {
               System.out.println("Number is ODD.");

          }

     }

     public static boolean isEven(int a) {
          if (a % 2 == 0) {
               return true;
          } else {
               return false;
          }
     }
}

// Write a method named isEven that accepts an int argument. The method should
// return true if the argument is even, or false otherwise. Also write a program
// to test your method.
