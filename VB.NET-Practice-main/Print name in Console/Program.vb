Imports System

Module Program
    Sub Main(args As String())
        Dim name As String
        Dim age As Integer
        Console.WriteLine("Enter the name: ")
        name = Console.ReadLine()
        Console.WriteLine("Enter the age: ")
        age = Console.ReadLine()
        Console.WriteLine("Your name is:{0} ", name)
        Console.WriteLine("Your age is: {0}", age)
    End Sub
End Module