import java.util.Scanner;

public class question1 {
     public static void main(String[] args){

          Scanner sc = new Scanner(System.in);

          System.out.print("Enter the number A: ");
          float a = sc.nextFloat();
          System.out.print("Enter the number B: ");
          float b = sc.nextFloat();
          System.out.print("Enter the number C: ");
          float c = sc.nextFloat();

          float res = (a + b + c) / 3;
          System.out.println("Average of " + a + ", " + b + " and " + c + " is: " + res);
     }
}
