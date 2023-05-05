import java.applet.Applet;
import java.awt.Graphics;
public class setFontEx extends Applet
{
	Font obj=new Font("Times New Roman", Font.BOLD, 20);
	public void paint(Graphics g)
	{
		g.setFont(obj);
		g.drawString("Hello XPRO", 50,20); //50=x, 20=y
	}
}





































//<applet code="setFontEx" width="300" height="350"> </applet>



