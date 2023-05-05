import java.util.Scanner;

public class module5 {
     public static void main(String argd[]) {

          /*
           * String name = "Sunny"; // String variable
           * int age = 20; // Integer variable
           * double height = 5.5; // Double variable
           * char favChar = 'S'; // Character variable
           * boolean isStudent = true; // Boolean variable
           * 
           * name = "Sunny Sahsi"; // Reassigning the value of name variable
           * 
           * System.out.println(name);
           * System.out.println(age);
           * System.out.println(height);
           * System.out.println(favChar);
           * System.out.println(isStudent);
           */
          /////////////////////////////////////////////////////////////////////////////////////////////////////////////
          /*
           * // Data types in Java
           * 
           * byte a = 10; // 1 byte (8 bits) -128 to 127
           * short b = 20; // 2 bytes (16 bits) -32,768 to 32,767
           * int c = 30; // 4 bytes (32 bits) -2,147,483,648 to 2,147,483,647
           * long d = 40; // 8 bytes (64 bits) -9,223,372,036,854,775,808 to
           * 9,223,372,036,854,775,807
           * float e = 50.0f; // 4 bytes (32 bits) 6-7 decimal digits
           * double f = 60.0d; // 8 bytes (64 bits) 15 decimal digits
           * boolean g = true; // 1 bit (true or false)
           * char h = 'i';
           * 
           * // Print Size and type of variable
           * 
           * System.out.println("Size of byte: " + Byte.SIZE);
           * System.out.println("Size of short: " + Short.SIZE);
           * System.out.println("Size of int: " + Integer.SIZE);
           * System.out.println("Size of long: " + Long.SIZE);
           * System.out.println("Size of float: " + Float.SIZE);
           * System.out.println("Size of double: " + Double.SIZE);
           * System.out.println("Size of char: " + Character.SIZE);
           */
          /////////////////////////////////////////////////////////////////////////////////////////////////////////////

          // Input in Java

          // Scanner sc = new Scanner(System.in); // Scanner class

          // System.out.print("Enter your name: "); 
          // String name = sc.nextLine();
          // System.out.print("Enter your age: ");
          // int age = sc.nextInt();
          // System.out.print("Enter your height: ");
          // double height = sc.nextDouble();
          // System.out.print("Enter your favourite character: ");
          // char favChar = sc.next().charAt(0);
          // System.out.print("Are you a student(TRUE/FALSE): ");
          // boolean isStudent = sc.nextBoolean();

          // System.out.println("Name: " + name);
          // System.out.println("Age: " + age);
          // System.out.println("Height: " + height);
          // System.out.println("Favourite Character: " + favChar);
          // System.out.println("Are you a student: " + isStudent);

          /////////////////////////////////////////////////////////////////////////////////////////////////////////////
          // Type Casting in Java
          /*
          double b = 20.5;
          int c = (int) b; // Explicit type casting    // Lossy conversion (data loss)
          System.out.println(c);

          int a = 10;
          double d = a; // Implicit type casting  // Lossless conversion (no data loss)
          System.out.println(d);

          // byte -> short -> int -> long -> float -> double // Widening Casting (Automatic)  (no data loss)   //Implicit type casting
          // double -> float -> long -> int -> short -> byte // Narrowing Casting (Manual)    (data loss)      //Explicit type casting
          */
          /////////////////////////////////////////////////////////////////////////////////////////////////////////////
          // Type promotion in expressions

          byte b = 42;
          char c = 'a';
          short s = 1024;
          int i = 50000;
          float f = 5.67f;
          double d = .1234;
          double result = (f * b) + (i / c) - (d * s);
          // result is 1181.2979
          System.out.println((f * b) + " + " + (i / c) + " - " + (d * s));
          System.out.println("result = " + result);


     }
}