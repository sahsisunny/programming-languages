import java.applet.Applet;
import java.awt.*;
public class DrawRectangleEx extends Applet
{
	
	public void paint(Graphics g)
	{
		g.setColor(Color.red);
		//g.drawRect(20,20,Width,Height);
		g.drawRect(20,20,150,50);
		g.setColor(Color.blue);
		g.fillRect(20,100,150,50);
		g.setColor(Color.green);
		g.drawRect(20,200,50,150);
		g.setColor(Color.red);
		g.fillRect(100,200,50,50);
	}
}



//<applet code="DrawRectangleEx" width="300" height="400"> </applet>



