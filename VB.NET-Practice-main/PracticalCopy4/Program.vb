Module Program
    Enum roll
        sunny = 7
        priyanshu = 1
        deepak = 17
    End Enum
    Sub Main()
        Const topics As String = "This is a program which shows const and enum type declaration."
        Const Uline As String = "-----------------------------------------------------------"
        Console.WriteLine(topics)
        Console.WriteLine(Uline)
        Console.WriteLine("The Roll number of Sunny is : " & roll.sunny)
        Console.WriteLine("The Roll number of Priyanshu is : " & roll.priyanshu)
        Console.WriteLine("The Roll number of Sunny is : " & roll.deepak)
        Console.ReadKey()
    End Sub
End Module

