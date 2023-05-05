import java.util.Scanner;

public interface question2 {
     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          System.out.print("Enter the Side of Square: ");
          float side = sc.nextFloat();

          float area = side*side;
          System.out.println("Area of Square is: "+area);
     }
}
