import java.util.Scanner;

public class question3 {
     public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);

          System.out.print("Enetr the cost of Pencil: ");
          float price1 = sc.nextFloat();
          System.out.print("Enetr the cost of Pen: ");
          float price2 = sc.nextFloat();
          System.out.print("Enetr the cost of Eraser: ");
          float price3 = sc.nextFloat();
          float initialTotalPrice = price1+price2+price3;
          float gst = (initialTotalPrice*18)/100;
          float totalPrice = initialTotalPrice+gst;

          System.out.println("Total Price (include GST 18%): "+totalPrice);

     }
}
