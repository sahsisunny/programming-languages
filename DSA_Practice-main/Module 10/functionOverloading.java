public class functionOverloading {
     public static void main(String[] args) {

          System.out.println("2 Numbers (Using Parameter): " + sumFun(15, 12));
          System.out.println("3 Numbers (Using Parameter): " + sumFun(15, 12, 23));

          System.out.println("2 Numbers (Using Data Types): " + sumFun2(15, 12));
          System.out.println("2 Numbers (Using Data Types): " + sumFun2(12.26f, 26.2f));
     }

     // Function Overloading using Parameter
     public static int sumFun(int a, int b) {
          return a + b;
     }

     public static int sumFun(int a, int b, int c) {
          return a + b + c;
     }

     // Function Overloading Using Data Types
     public static int sumFun2(int a, int b) {
          return a + b;
     }

     public static float sumFun2(float a, float b) {
          return a + b;
     }

}
