public class InvertedHalfNumberPyramid {
     public static void main(String[] args) {
          int line = 5;
          for (int row = 1; row <= line; row++) {
               for (int column = 1; column <= line; column++) {
                    System.out.print(row);
               }
               for (int j = 1; j <= line - row + 1; j--) {
                    System.out.print(" ");
               }
               System.out.println();
          }
     }
}