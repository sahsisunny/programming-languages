import java.util.Scanner;

public class question5 {
     public static void main(String[] args) {
          Scanner input = new Scanner(System.in);
          System.out.print("Enter a number: ");
          int number = input.nextInt();
          System.out.println(digitSum(number));
     }

     public static int digitSum(int num) {
          int sum = 0;
          while (num > 0) {
               int lastDigit = num % 10; // get the last digit
               sum += lastDigit; // add it to the sum
               num /= 10; // remove the last digit
          }
          return sum;
     }
}
