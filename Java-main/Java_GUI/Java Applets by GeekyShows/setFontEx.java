import java.applet.Applet;
import java.awt.*;
public class setFontEx extends Applet
{
	Font obj=new Font("Times New Roman", Font.BOLD, 20);
	Font obj1=new Font("Serif", Font.ITALIC, 20);
	public void paint(Graphics g)
	{
		g.setFont(obj);
		g.drawString("Hello XPRO", 50,100); //50=x, 20=y
		g.setFont(obj1);
		g.drawString("Hello XPRO", 50,150);
	}
}



//<applet code="setFontEx" width="300" height="350"> </applet>



