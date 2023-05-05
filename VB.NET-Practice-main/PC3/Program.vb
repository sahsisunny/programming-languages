Imports System

Module Program
    Sub Main(args As String())
        Dim name As String
        Dim roll, age As Integer
        Console.WriteLine("Enter the roll:")
        roll = Console.ReadLine()
        Console.WriteLine("Enter the Name:")
        name = Console.ReadLine()
        Console.WriteLine("Enter the Age:")
        age = Console.ReadLine()
        Console.WriteLine("Roll: {0},Name: {1}, Age: {2}", roll, name, age)
    End Sub
End Module
