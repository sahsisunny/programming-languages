import java.util.Scanner;

public class question1 {
     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          System.out.print("Enter the Number: ");
          int num = sc.nextInt();

          if (num > 0) {
               System.out.println(num + " is POSITIVE");
          } else if (num < 0) {
               System.out.println(num + " is NEGATIVE");
          } else {
               System.out.println(num + " is ZERO");

          }
     }
}
