import java.applet.Applet;
import java.awt.*;
public class BorderLayoutEx extends Applet
{
	BorderLayout f1 = new BorderLayout(30,20);
	Button b1=new Button("Submit");
	Button b2=new Button("Reset");
	Button b3=new Button("Erase");
	Button b4=new Button("Run");
	
	public void init()
	{
		this.setLayout(f1);
		add("South",b1);
		add("East",b2);
		add("North",b3);
		add("West",b4);
	
		
		
	}
}



//<applet code="BorderLayoutEx" width="500" height="800"> </applet>



