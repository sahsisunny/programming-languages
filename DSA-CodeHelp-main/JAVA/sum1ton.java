import java.util.Scanner;

public class sum1ton {
     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          System.out.print("Enter the Number: ");
          int num = sc.nextInt();
          int sum = 0;
          for (int i = 1; i <= num; i++) {
               sum = sum + i;
          }
          System.out.println("Sum of 1 to " + num + " = " + sum);

     }

}
