public class hollowRectangle {
     public static void main(String[] args) {
          int row = 10;
          int column = 15;
          fun(row, column);

     }

     public static void fun(int row, int colum) {
          for (int i = 1; i < row; i++) {
               for (int j = 0; j < colum; j++) {
                    if (i == 1 || i == row || j == 0 || j == colum - 1) {
                         System.out.print("*");
                    } else {
                         System.out.print(" ");
                    }
               }
               System.out.println();
          }
     }
}
