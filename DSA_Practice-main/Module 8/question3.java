import java.util.Scanner;

public class question3 {
     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);

          System.out.print("Enter the number: ");
          int number = sc.nextInt();
          int fact = 1;

          for (int i = 1; i <= number; i++) {
               fact *= i;
          }
          System.out.println("Factorial of " + number + " is: " + fact);

     }
}
