Module Program
    Sub Main(args As String())
        Console.WriteLine("~~~~~ Basic Calculator ~~~~~")
        Dim num1%, num2%, sum%, subt%, mul%, div%
        Console.Write("Enter the 1st Number: ")
        num1 = Console.ReadLine()
        Console.Write("Enter the 2nd Number: ")
        num2 = Console.ReadLine
        Dim sign As String
        Console.Write("Enter the sign(+,-,*,/) : ")
        sign = Console.ReadLine()
        Select Case sign
            Case "+"
                sum = num1 + num2
                Console.WriteLine("Sum is : {0}", sum)
            Case "-"
                subt = num1 - num2
                Console.WriteLine("Subtraction is : {0}", subt)
            Case "*"
                mul = num1 * num2
                Console.WriteLine("Multiplication is : {0}", mul)
            Case "/"
                div = num1 / num2
                Console.WriteLine("Division is : {0}", div)
            Case Else
                Console.WriteLine("Invalid sign for Mathematical operation!!")
        End Select
    End Sub
End Module