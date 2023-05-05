Module Program
    Sub Main(args As String())
        Dim name As String
        Dim age As Integer
        Console.Write("Enter the name: ")
        name = Console.ReadLine()
        Console.Write("Enter the age: ")
        age = Console.ReadLine()
        Console.WriteLine("Your name is '{0}' and age is '{1}'.", name, age)
    End Sub
End Module