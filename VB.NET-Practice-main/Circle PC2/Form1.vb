Public Class Form1
    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        TextBox1.Text = ""
        Label2.Text = ""
        Label3.Text = ""
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Close()
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim pi, area, radius As Decimal
        radius = TextBox1.Text
        pi = 3.14
        area = pi * radius * radius
        Label2.Text = area
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Dim diameter, radius As Decimal
        radius = TextBox1.Text
        diameter = (2 * radius)
        Label3.Text = diameter
    End Sub
End Class
