public class DecimalToBinary {
     public static void main(String[] args) {
          System.out.println("Decimal to Binary: " + decimalToBinary(6));
     }

     public static int decimalToBinary(int decimal) {
          int pow = 0;
          int binary = 0;

          while (decimal > 0) {
               int lastDigit = decimal % 2;
               binary += (lastDigit * (int) Math.pow(10, pow));
               pow++;
               decimal /= 2;
          }
          return binary;
     }
}
