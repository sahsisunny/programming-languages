Public Class Form1
    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Close()
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Timer1.Start()
        Timer2.Start()
        Timer3.Start()
    End Sub

    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        Label1.Text = Label1.Text + 1
        If Label1.Text = 60 Then
            Label1.Text = "00"
        End If

    End Sub
    Private Sub Timer2_Tick(sender As Object, e As EventArgs) Handles Timer2.Tick
        Label2.Text = Label2.Text + 1
        If Label2.Text = 60 Then
            Label2.Text = "00"
        End If
    End Sub
    Private Sub Timer3_Tick(sender As Object, e As EventArgs) Handles Timer3.Tick
        Label3.Text = Label3.Text + 1
        If Label3.Text = 60 Then
            Label3.Text = "00"
        End If
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Timer1.Stop()
        Timer2.Stop()
        Timer3.Stop()
    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles Me.Load
        Timer1.Interval = 60000
        Timer2.Interval = 1000
        Timer3.Interval = 1
        Timer1.Stop()
        Timer2.Stop()
        Timer3.Stop()
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Timer1.Stop()
        Timer2.Stop()
        Timer3.Stop()
        Label1.Text = "00"
        Label2.Text = "00"
        Label3.Text = "00"
    End Sub
End Class
