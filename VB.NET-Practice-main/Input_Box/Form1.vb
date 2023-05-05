Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim name As String
        name = InputBox("Enter your Name", "Name Input")
        MessageBox.Show(name, "Print Name")
    End Sub
End Class
