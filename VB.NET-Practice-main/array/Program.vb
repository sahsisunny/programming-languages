Module num_Array
    Sub Main()
        Dim i As Integer, Sum As Integer = 0
        'In VB.NET the size of an array is n+1  
        'Declaration and Initialization of marks() array  
        Dim marks() As Integer = {58, 68, 95, 50, 23, 89}
        Console.WriteLine(" Marks in 6 Subjects")
        For i = 0 To marks.Length - 1
            Console.WriteLine(" Marks {0}", marks(i))
            Sum = Sum + marks(i)
        Next
        Console.WriteLine(" Grand total is {0}", Sum)
        Console.WriteLine(" Press any key to exit...")
        Console.ReadKey()
    End Sub
End Module

