import java.util.Scanner;

public class PrimeInRange {
     public static void main(String[] args) {

          Scanner sc = new Scanner(System.in);
          System.out.print("Enter the upper limit: ");
          int upperLimit = sc.nextInt();

          printPrime(upperLimit);
     }

     public static void printPrime(int upperLimit) {

          for (int i = 2; i <= upperLimit; i++) {
               if (primeFun(i)) {
                    System.out.println(i);
               }
          }
     }

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
