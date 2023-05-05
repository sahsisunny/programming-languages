public class question5 {
     public static void main(String[] args) {
          int num = 5;
          for (int line = 0; line <= num; line++) {
               for (int space = 0; space < num - line; space++) {
                    System.out.print(" ");
               }
               for (int star = 0; star < line; star++) {
                    System.out.print("*");
               }
               System.out.println();
          }

     }
}
