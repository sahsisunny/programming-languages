Public Class Form1
    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Close()
    End Sub
    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        ListBox1.Items.Clear()
    End Sub
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim num As Integer
        Dim res As Integer
        Dim result As String
        ListBox1.Items.Clear()
        num = NumericUpDown1.Value
        For i As Integer = 1 To 10 Step 1
            res = Str(num * i)
            result = num & " * " & i & " = " & res
            ListBox1.Items.Add(result)
        Next
    End Sub
End Class
