import java.applet.Applet;
import java.awt.*;
import java.awt.event.*;
public class EventHandEx extends Applet implements ActionListener
{
	
	Button b1 = new Button("Click Me");
	String str=" ";
	public void init()
	{
		add(b1);
		b1.addActionListener(this);
	}
	
	public void paint(Graphics g)
	{
		g.drawString(str, 20,50);
	}
	public void actionPerformed(ActionEvent e)
	{
		str= "Why you clicked button ??";
		repaint();
	}
}













//<applet code="EventHandEx" width="300" height="350"> </applet>



