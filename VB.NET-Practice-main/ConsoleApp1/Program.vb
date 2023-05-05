Imports System

Module Program
    Sub Main(args As String())
        Dim num1%
        Console.Write("Enput the number: ")
        num1 = Console.ReadLine()
        If (num1 < 50) Then
            Console.WriteLine("{0} is less then 50", num1)
        Else
            Console.WriteLine("Please enter valid input")
        End If
    End Sub
End Module
