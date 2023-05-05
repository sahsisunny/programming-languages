import java.applet.Applet;
import java.awt.*;
public class getColorEx extends Applet
{
	Font obj=new Font("Times New Roman", Font.BOLD, 20);
	Font obj1=new Font("Serif", Font.ITALIC, 20);
	
	Color col = new Color(255,110,242);
	public void paint(Graphics g)
	{
		g.setFont(obj);
		g.setColor(Color.red);
		g.drawString("Hello XPRO", 50,100); //50=x, 20=y
		g.drawString("Color Value"+g.getColor(),50,200);
		g.setFont(obj1);
		g.setColor(col);
		g.drawString("Hello XPRO", 50,150);
		g.drawString("Color Value: "+g.getColor(),50,250);
		
	}
}



//<applet code="getColorEx" width="300" height="350"> </applet>



