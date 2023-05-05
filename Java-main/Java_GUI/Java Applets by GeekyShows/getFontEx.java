import java.applet.Applet;
import java.awt.*;
public class getFontEx extends Applet
{
	Font obj=new Font("Times New Roman", Font.BOLD, 20);
	Font obj1=new Font("Serif", Font.ITALIC, 20);
	public void paint(Graphics g)
	{
		g.setFont(obj);
		g.drawString("Hello XPRO", 50,100); //50=x, 20=y
		g.drawString("Font Details"+g.getFont(),50,200);
		g.setFont(obj1);
		g.drawString("Hello XPRO", 50,150);
		g.drawString("Font Name: "+g.getFont().getName(),50,250);
		g.drawString("Font Style in Array: "+g.getFont().getStyle(),50,300);
		g.drawString("Font Size: "+g.getFont().getSize(),50,350);
	}
}



//<applet code="getFontEx" width="300" height="350"> </applet>



