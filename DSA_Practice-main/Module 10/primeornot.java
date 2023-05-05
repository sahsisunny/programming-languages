import java.util.Scanner;

public class primeornot {
     public static void main(String[] args) {

          Scanner sc = new Scanner(System.in);
          System.out.print("Enter a number: ");
          int num = sc.nextInt();

          boolean res = primeFun(num);
          if (!res) {
               System.out.println("Not Prime");
          } else {
               System.out.println("Prime");
          }
     }

     // Function to check if a number is prime or not

     public static boolean primeFun(int num) {

          // For corner cases
          if (num == 0 || num == 1) {
               return false;
          } else {
               for (int i = 2; i <= Math.sqrt(num); i++) {
                    if (num % i == 0) {
                         return false;
                    }
               }
          }
          return true;
     }
}
