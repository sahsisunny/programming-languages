Module Program
    Sub Main(args As String())
        Dim diameter, radius, area As Decimal
        Const pi = 3.141
        Console.Write("Enter the Radius : ")
        radius = Console.ReadLine
        area = pi * radius * radius
        Console.WriteLine("Area is : {0}", area)
        diameter = (2 * radius)
        Console.WriteLine("Diameter is : {0}", diameter)
    End Sub
End Module
