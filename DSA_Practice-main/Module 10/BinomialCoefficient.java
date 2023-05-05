public class BinomialCoefficient {
     public static void main(String[] args) {
          System.out.println(BioCoe(5, 3));

     }

     public static int factFun(int num) {
          int fact = 1;
          for (int i = 1; i <= num; i++) {
               fact *= i;
          }
          return fact;

     }

     public static float BioCoe(int n, int r) {
          int factN = factFun(n);
          int factr = factFun(r);
          int factnr = factFun(n - r);
          float bc;
          bc = factN / (factr * factnr);
          return bc;

     }
}
