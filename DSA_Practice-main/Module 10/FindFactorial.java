public class FindFactorial {
     public static void main(String[] args) {
          System.out.println(factFun(5));
     }

     public static int factFun(int num) {
          int fact = 1;
          for (int i = 1; i <= num; i++) {
               fact *= i;
          }
          return fact;

     }
}
