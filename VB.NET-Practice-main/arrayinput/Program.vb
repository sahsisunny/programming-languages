Imports System
Module Input_array
    Sub Main()
        'Definition of array  
        Dim arr(6) As Integer
        '= New Integer(5) {}
        For i As Integer = 0 To 5
            Console.WriteLine(" Enter the value for arr[{0}] : ", i)
            arr(i) = Console.ReadLine()  ' Accept the number in array   
        Next
        Console.WriteLine(" The array elements are : ")
        ' Definition of For loop  
        For j As Integer = 0 To 5
            Console.WriteLine("{0}", arr(j))
        Next
        Console.WriteLine(" Press any key to exit...")
        Console.ReadKey()
    End Sub
End Module
