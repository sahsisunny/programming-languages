import java.util.Scanner;

public class calculator {
     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);

          System.out.print("Enter the 1st Number: ");
          float num1 = sc.nextFloat();
          System.out.print("Enter the 2nd Number: ");
          float num2 = sc.nextFloat();
          float res;

          System.out.print("ENter the Sign(+, -, *, /, %)");
          String sign = sc.next();

          switch (sign) {
               case "+":
                    res = num1 + num1;
                    System.out.println(num1 + " + " + num2 + " = " + res);
                    break;
               default:
                    break;
          }
     }
}