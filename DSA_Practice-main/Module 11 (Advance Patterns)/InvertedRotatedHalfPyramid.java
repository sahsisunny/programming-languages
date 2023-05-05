public class InvertedRotatedHalfPyramid {
     public static void main(String[] args) {
          int line = 10;
          for (int row = 1; row <= line; row++) {
               for (int column = 1; column <= line - row; column++) {
                    System.out.print(" ");
               }
               for (int i = 1; i <= row; i++) {
                    System.out.print("*");
               }
               System.out.println();
          }
     }
}