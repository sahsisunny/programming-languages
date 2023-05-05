Public Class Form1
    Private Sub Button5_Click(sender As Object, e As EventArgs) Handles Button5.Click
        TextBox1.Text = ""
        TextBox2.Text = ""
        TextBox3.Text = ""
    End Sub

    Private Sub Label3_Click(sender As Object, e As EventArgs) Handles Label3.Click

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim num1, num2, result As Integer
        num1 = TextBox1.Text
        num2 = TextBox2.Text
        result = (num1 + num2)
        TextBox3.Text = result

    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Dim num1, num2, result As Integer
        num1 = TextBox1.Text
        num2 = TextBox2.Text
        result = (num1 - num2)
        TextBox3.Text = result
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Dim num1, num2, result As Integer
        num1 = TextBox1.Text
        num2 = TextBox2.Text
        result = (num1 * num2)
        TextBox3.Text = result
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Dim num1, num2, result As Integer
        num1 = TextBox1.Text
        num2 = TextBox2.Text
        result = (num1 \ num2)
        TextBox3.Text = result
    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub

    Private Sub Button6_Click(sender As Object, e As EventArgs)

    End Sub
End Class
