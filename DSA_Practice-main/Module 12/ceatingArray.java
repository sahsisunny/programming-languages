public class ceatingArray {
     public static void main(String[] args) {
          // Creating Array   1
          int[] marks = new int[5];
          // Assigning Values
          marks[0] = 100;
          marks[1] = 90;
          marks[2] = 80;
          marks[3] = 70;
          marks[4] = 60;
          // Printing Values
          System.out.println(marks[0]);

          // Creating Array   2
          int[] marks1 = { 100, 90, 80, 70, 60 };

          // Creating Array   3
          int[] marks2 = new int[] { 100, 90, 80, 70, 60 };

          // Creating Array   4 (Mix data type)
          Object[] mix = { 100, 90, 80, 70, 60, "Hello", 'A', 10.5 };

          // Creating Array   5 (Multi Dimensional Array)
          int[][] multi = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } }; // 3x3
          int[][] multi1 = { { 1, 2, 3 }, { 4, 5, 6 } }; // 2x3
          int[][] multi2 = { { 1, 2 }, { 4, 5 }, { 7, 8 } }; // 3x2
          int[][] multi3 = { { 1 }, { 4 }, { 7 } }; // 3x1
          int[][] multi4 = { { 1, 2, 3, 4, 5, 6, 7, 8, 9 } }; // 1x9

          // Printing Values

          

     }
}