import java.util.Scanner;

public class question5 {
     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);

          System.out.print("Enter the YEAR: ");
          int year = sc.nextInt();

          boolean x = (year % 4) == 0;
          boolean y = (year % 100) != 0;
          boolean z = ((year % 4 == 0) && (year % 100) == 0);

          if (x && (y || z)) {
               System.out.println(year + " is a leap YEAR.");
          } else {
               System.out.println(year + " is not aleap YEAR.");
          }
     }
}
