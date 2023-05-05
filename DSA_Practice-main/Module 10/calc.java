import java.util.Scanner;

public class calc {
     public static float sum(float a, float b) {
          return  a + b;
     }

     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          System.out.print("Enter the Number 1: ");
          float num1 = sc.nextFloat();
          System.out.print("Enter the Number 2: ");
          float num2 = sc.nextFloat();

          float res = sum(num1, num2);
          System.out.println("Sum of " + num1 + " and " + num2 + " is: " + res);
     }
}
