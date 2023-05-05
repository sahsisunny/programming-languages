public class butterFly {
     public static void main(String[] args) {
          int num = 4;
          for (int i = 1; i <= num; i++) {
               for (int j = 1; j <= i; j++) {
                    if ((i + j) % 2 == 0) {
                         System.out.print(" ");
                    } else {
                         System.out.print("*");
                    }
               }
               System.out.println();
          }
     }
}
