Public Class Form1
    Dim plainText As String
    Dim encryptedText As String
    Dim tlength%
    Function encrrypt()
        plainText = TextBox1.Text
        tlength = plainText.Length - 1
        encryptedText = ""

        While tlength >= 0
            encryptedText = encryptedText + plainText(tlength)
            tlength = tlength - 1
        End While

        TextBox2.Text = encryptedText
    End Function
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        encrrypt()
        Label3.Text = plainText.Length
    End Sub
    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        If RadioButton2.Checked Then
            GroupBox1.Text = "Decryption"
            Label1.Text = "Encrypted Text: "
            Label2.Text = "Plain Text: "
            Button1.Text = "Decrypt"
            TextBox1.Text = TextBox2.Text
            TextBox2.Clear()
        ElseIf RadioButton1.Checked Then
            GroupBox1.Text = "Encryption"
            Label1.Text = "Plain Text: "
            Label2.Text = "Encryption Text: "
            Button1.Text = "Encrypt"
            TextBox1.Text = TextBox2.Text
            TextBox2.Clear()
        End If
    End Sub
End Class
