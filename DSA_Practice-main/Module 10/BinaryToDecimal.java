public class BinaryToDecimal {
     public static void main(String[] args) {
          System.out.println("Binary to Decimal: " + binaryToDecimal(111));
     }

     public static int binaryToDecimal(int binary) {
          int pow = 0;
          int decimal = 0;

          while (binary > 0) {
               int lastDigit = binary % 10;
               decimal += (lastDigit * (int) Math.pow(2, pow));
               pow++;
               binary /= 10;
          }
          return decimal;
     }
}
