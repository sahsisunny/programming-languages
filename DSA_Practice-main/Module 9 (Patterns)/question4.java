public class question4 {
     public static void main(String[] args) {

          int num = 5;

          char c = 'A';
          for (int line = 1; line <= num; line++) {
               for (int number = 1; number <= line; number++) {
                    System.out.print(c + " ");
                    c++;
               }
               System.out.println();
          }
     }
}
