Public Class Form1
    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Close()
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        TextBox1.Clear()
        TextBox2.Clear()
        TextBox3.Clear()
        TextBox4.Clear()
        TextBox5.Clear()
        TextBox6.Clear()
        DateTimePicker1.ResetText()
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        TBname.Text = TextBox1.Text
        TBfname.Text = TextBox2.Text
        TBmname.Text = TextBox3.Text
        TBcourse.Text = TextBox4.Text

        If RadioButton1.Checked = True Then
            TBgender.Text = "Male"
        ElseIf RadioButton2.Checked = True Then
            TBgender.Text = "Female"
        Else
            TBgender.Text = "Transgender"
        End If

        TBdob.Text = DateTimePicker1.Text
        TBhobbies.Text = TextBox5.Text
        TBcnumber.Text = "+91 " + TextBox6.Text
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        TBname.Text = ""
        TBfname.Text = ""
        TBmname.Text = ""
        TBcourse.Text = ""
        TBgender.Text = ""
        TBdob.Text = ""
        TBhobbies.Text = ""
        TBcnumber.Text = ""

    End Sub



End Class