import java.applet.Applet;
import java.awt.*;
public class TextFieldEx extends Applet
{
	TextField t1=new TextField(30);
	TextField t2=new TextField("Enter text....");
	public void init()
	{
		add(t1);
		add(t2);
		t2.setEditable(false);
	}
	public void paint(Graphics g)
	{
		g.drawString("Result: "+t1.getText(),80,50);
	}
}



//<applet code="TextFieldEx" width="500" height="800"> </applet>



