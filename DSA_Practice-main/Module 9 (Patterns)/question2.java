public class question2 {
     public static void main(String[] args) {

          int num = 5;
          for (int line = 1; line <= num; line++) {
               for (int star = 1; star <= (num - line + 1); star++) {
                    System.out.print("* ");
               }
               System.out.println();
          }
     }
}
