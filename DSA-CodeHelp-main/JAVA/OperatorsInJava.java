public class OperatorsInJava {
     public static void main(String[] args) {
          int a = 10;
          int b = 20;
          int c = 25;

          // Arithmetic Operators
          System.out.println(" Arithmetic Operators ");
          System.out.println(" Addition :- " + a + "+" + b + " = " + (a + b));
          System.out.println(" Subtraction :- " + a + "-" + b + " = " + (a - b));
          System.out.println(" Multiplication :- " + a + "*" + b + " = " + (a * b));
          System.out.println(" Division :- " + a + "/" + b + " = " + (a / b));
          System.out.println(" Modulus :- " + a + "%" + b + " = " + (a % b));
          System.out.println(" Increment :- " + a + "++" + " = " + (a++));
          System.out.println(" Decrement :- " + a + "--" + " = " + (a--));

          // Relational Operators
          System.out.println(" Relational Operators ");
          System.out.println(" Equal to :- " + a + "==" + b + " = " + (a == b));
          System.out.println(" Not Equal to :- " + a + "!=" + b + " = " + (a != b));
          System.out.println(" Greater than :- " + a + ">" + b + " = " + (a > b));
          System.out.println(" Less than :- " + a + "<" + b + " = " + (a < b));
          System.out.println(" Greater than or Equal to :- " + a + ">=" + b + " = " + (a >= b));
          System.out.println(" Less than or Equal to :- " + a + "<=" + b + " = " + (a <= b));

          // Logical Operators
          System.out.println(" Logical Operators ");
          // System.out.println(" Logical AND :- " + a + "&&" + b + " = " + (a && b));
          // System.out.println(" Logical OR :- " + a + "||" + b + " = " + (a || b));
          // System.out.println(" Logical NOT :- " + a + "!" + " = " + (!a));

          // Bitwise Operators
          System.out.println(" Bitwise Operators ");
          System.out.println(" Bitwise AND :- " + a + "&" + b + " = " + (a & b));
          System.out.println(" Bitwise OR :- " + a + "|" + b + " = " + (a | b));
          System.out.println(" Bitwise XOR :- " + a + "^" + b + " = " + (a ^ b));
          System.out.println(" Bitwise Complement :- " + a + "~" + " = " + (~a));
          System.out.println(" Left Shift :- " + a + "<<" + b + " = " + (a << b));
          System.out.println(" Right Shift :- " + a + ">>" + b + " = " + (a >> b));
          System.out.println(" Zero Fill Right Shift :- " + a + ">>>" + b + " = " + (a >>> b));

          // Assignment Operators
          System.out.println(" Assignment Operators ");
          System.out.println(" Simple Assignment :- " + a + "=" + b + " = " + (a = b));
          System.out.println(" Add AND Assignment :- " + a + "+=" + b + " = " + (a += b));
          System.out.println(" Subtract AND Assignment :- " + a + "-=" + b + " = " + (a -= b));
          System.out.println(" Multiply AND Assignment :- " + a + "*=" + b + " = " + (a *= b));
          System.out.println(" Divide AND Assignment :- " + a + "/=" + b + " = " + (a /= b));
          System.out.println(" Modulus AND Assignment :- " + a + "%=" + b + " = " + (a %= b));
          System.out.println(" Left Shift AND Assignment :- " + a + "<<=" + b + " = " + (a <<= b));
          System.out.println(" Right Shift AND Assignment :- " + a + ">>=" + b + " = " + (a >>= b));
          System.out.println(" Zero Fill Right Shift AND Assignment :- " + a + ">>>=" + b + " = " + (a >>>= b));
          System.out.println(" Bitwise AND Assignment :- " + a + "&=" + b + " = " + (a &= b));
          System.out.println(" Bitwise Exclusive OR AND Assignment :- " + a + "^=" + b + " = " + (a ^= b));
          System.out.println(" Bitwise Inclusive OR AND Assignment :- " + a + "|=" + b + " = " + (a |= b));

          // Unary Operators
          System.out.println(" Unary Operators ");
          System.out.println(" Unary Plus :- " + a + "+" + " = " + (+a));
          System.out.println(" Unary Minus :- " + a + "-" + " = " + (-a));
          System.out.println(" Pre Increment :- " + a + "++" + " = " + (++a));
          System.out.println(" Post Increment :- " + a + "++" + " = " + (a++));
          System.out.println(" Pre Decrement :- " + a + "--" + " = " + (--a));
          System.out.println(" Post Decrement :- " + a + "--" + " = " + (a--));
          // System.out.println(" Logical Complement :- " + a + "!" + " = " + (!a));
          System.out.println(" Bitwise Complement :- " + a + "~" + " = " + (~a));

          // Ternary Operators
          System.out.println(" Ternary Operators ");
          System.out.println(" Ternary Operator :- " + a + "?" + b + ":" + c + " = " + (a > b ? a : b));
          System.out.println(" Ternary Operator :- " + a + "?" + b + ":" + c + " = " + (a < b ? a : b));

     }
}