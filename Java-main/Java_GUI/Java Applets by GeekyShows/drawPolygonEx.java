import java.applet.Applet;
import java.awt.*;
public class drawPolygonEx extends Applet
{
	int x[]={20,50,80};
	int y[]={80,20,80};
	public void paint(Graphics g)
	{
		g.setColor(Color.red);
		//g.drawPolygon(x,y,CornerNo.);
		g.fillPolygon(x,y,3);
	}
}



//<applet code="drawPolygonEx" width="500" height="800"> </applet>



