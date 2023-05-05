import java.util.Scanner;

public class question3 {

     public static boolean palin(int num) {
          int orgNum = num;
          int rev = 0, rem;
          for (; num != 0;) {
               rem = num % 10;
               rev = rev * 10 + rem;
               num = num / 10;
          }

          if (rev == orgNum) {
               return true;
          } else {
               return false;
          }

     }

     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          System.out.print("Enter the number: ");
          int num = sc.nextInt();

          if (palin(num)) {
               System.out.println("Palindrome");
          } else {
               System.out.println("Not a Palindrome");
          }

     }
}

/*
 * Write a Java program to check if a number is a palindrome in Java? ( 7 27 is
 * a palindrome, 327 is not).
 * A number is called a palindrome if the number is equal to the reverse of a
 * number e.g., 7 21 is a palindrome because the reverse of 7 27 is 7 27 itself.
 * On the other hand, 327 is not a palindrome because the reverse of 327 is 123,
 * which is not equal to 327.
 */

// 1. Reverse number
// COmpare both number if equal then palindroem else not