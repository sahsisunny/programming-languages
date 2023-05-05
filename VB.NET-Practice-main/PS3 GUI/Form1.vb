Public Class Form1
    Private Sub TextBox4_TextChanged(sender As Object, e As EventArgs) Handles TextBox4.TextChanged

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim name, age, roll As String
        roll = TextBox1.Text
        name = TextBox2.Text
        age = TextBox3.Text
        TextBox4.Text = ("Roll no.:" + roll + ", Name: " + name + " ,Age: " + age)
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        TextBox1.Text = " "
        TextBox2.Text = " "
        TextBox3.Text = " "
        TextBox4.Text = " "
    End Sub
End Class
