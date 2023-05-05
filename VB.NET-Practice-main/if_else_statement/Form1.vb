Public Class Form1
	Private Sub Label2_Click(sender As Object, e As EventArgs) Handles Label2.Click

	End Sub

	Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim num1%
        num1 = TextBox1.Text
        If (num1 < 50) Then
            Label2.Text = (Str(num1) + " is less then 50")
        Else
            Label2.Text = ("Please enter valid input")
        End If
    End Sub
End Class
