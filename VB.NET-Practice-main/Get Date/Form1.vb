Public Class calender
	Private Sub Button1_Click(sender As Object, e As EventArgs) Handles bcal.Click
		Dim dat, mont, yea As String
		dat = ComboBox1.Text
		mont = ComboBox2.Text
		yea = ComboBox3.Text
		Label2.Text = (dat + "/" + mont + "/" + yea)

	End Sub

	Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
		ComboBox1.Text = "Day"
		ComboBox1.Items.Clear()
		ComboBox1.Items.Add("1")
		ComboBox1.Items.Add("2")
		ComboBox1.Items.Add("3")
		ComboBox1.Items.Add("4")
		ComboBox1.Items.Add("5")
		ComboBox1.Items.Add("6")
		ComboBox1.Items.Add("7")
		ComboBox1.Items.Add("8")
		ComboBox1.Items.Add("9")
		ComboBox1.Items.Add("10")

		ComboBox2.Items.Clear()
		ComboBox2.Items.Add("Jan")
		ComboBox2.Items.Add("Feb")
		ComboBox2.Items.Add("Mar")
		ComboBox2.Items.Add("Apr")

		ComboBox3.Items.Clear()
		ComboBox3.Items.Add("2019")
		ComboBox3.Items.Add("2020")
		ComboBox3.Items.Add("2021")
		ComboBox3.Items.Add("2022")
	End Sub
End Class
