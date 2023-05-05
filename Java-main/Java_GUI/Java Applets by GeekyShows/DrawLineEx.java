import java.applet.Applet;
import java.awt.*;
public class DrawLineEx extends Applet
{
	
	public void paint(Graphics g)
	{
		g.setColor(Color.red);
		g.drawLine(20,20,100,20);
		g.setColor(Color.blue);
		g.drawLine(20,30,20,100);
		g.setColor(Color.green);
		g.drawLine(100,40,20,120);
	}
}



//<applet code="DrawLineEx" width="300" height="400"> </applet>



