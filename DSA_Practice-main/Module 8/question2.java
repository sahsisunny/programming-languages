import java.util.Scanner;

public class question2 {
     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);

          // System.out.print("Enter the Starting Number: ");
          // int start = sc.nextInt();
          // System.out.print("Enter the Ending Number: ");
          // int end = sc.nextInt();

          // int oddSum = 0, evenSum = 0;

          // for (int i = start; i <= end; i++) {
          // if (i % 2 == 0) {
          // evenSum += i;
          // } else {
          // oddSum += i;
          // }
          // }
          // System.out.println("Summ of EVEN = " + evenSum + "\nSumm of ODD = " +
          // oddSum);

          // Method 2
          int oddSum = 0, evenSum = 0;
          int choice;
          do {
               System.out.print("Enter the Number: ");
               int number = sc.nextInt();

               if (number % 2 == 0) {
                    evenSum += number;
               } else {
                    oddSum += number;
               }

               System.out.print("Do you want continue? press 1 for yes or 0 for no:  ");
               choice = sc.nextInt();

          } while (choice == 1);
          System.out.println("Summ of EVEN = " + evenSum + "\nSumm of ODD = " + oddSum);

     }
}
