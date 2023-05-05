import java.util.Scanner;

public class question1 {

     public static int average(int a, int b, int c) {
          int avg = (a + b + c) / 3;
          return avg;

     }

     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);

          System.out.print("Enter the first number: ");
          int num1 = sc.nextInt();
          System.out.print("Enter the second number: ");
          int num2 = sc.nextInt();
          System.out.print("Enter the third number: ");
          int num3 = sc.nextInt();

          System.out.println("Average of " + num1 + ", " + num2 + " and " + num3 + " is : " + average(num1, num2, num3));
     }
}