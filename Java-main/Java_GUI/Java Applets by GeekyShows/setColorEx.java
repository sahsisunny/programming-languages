import java.applet.Applet;
import java.awt.*;
public class setColorEx extends Applet
{
	Font obj=new Font("Times New Roman", Font.BOLD, 20);
	Font obj1=new Font("Serif", Font.ITALIC, 20);
	
	Color col = new Color(255,53,242);	//1st way do define color
	public void paint(Graphics g)
	{
		g.setFont(obj);
		g.setColor(Color.red);	//2nd way do define color
		g.drawString("Hello XPRO", 50,100); //50=x, 20=y
		g.setFont(obj1);
		g.setColor(col);
		g.drawString("Hello XPRO", 50,150);
	}
}



//<applet code="setColorEx" width="300" height="350"> </applet>

