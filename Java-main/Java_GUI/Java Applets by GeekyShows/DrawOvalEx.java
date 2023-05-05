import java.applet.Applet;
import java.awt.*;
public class DrawOvalEx extends Applet
{
	
	public void paint(Graphics g)
	{
		g.setColor(Color.red);
		//g.drawOval(20,20,Width,Height);
		g.fillOval(20,20,100,100);
		g.setColor(Color.blue);
		g.fillOval(50,150,50,50);
		g.setColor(Color.green);
		g.fillOval(20,300,50,150);
		g.setColor(Color.red);
		g.fillOval(100,400,50,50);
		
	}
}



//<applet code="DrawOvalEx" width="500" height="800"> </applet>



