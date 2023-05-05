import java.applet.Applet;
import java.awt.Graphics;
public class ParamTagApplet extends Applet
{
	public void paint(Graphics g)
	{
		String str = this.getParameter("msg");
		g.drawString(str, 100,80); //100=x, 80=y
	}
}









//<applet code="ParamTagApplet.class" width="300" height="350"> </applet>

