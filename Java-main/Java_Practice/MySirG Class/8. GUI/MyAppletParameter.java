import java.applet.Applet;
import java.awt.*;
public class MyAppletParameter extends Applet  {

	private String defaultMessage = "Hello";

	public void paint(Graphics g){
		String s1 = this.getParameter("site");
		if(s1==null)
			s1=defaultMessage;

		g.drawString(s1,50,25);
	}
}



	/*<applet code="MyAppletParameter" width="300" height="350">
	<param name="site" value= "www.rootlevel.com"/>
	</applet> */