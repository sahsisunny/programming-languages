import java.applet.Applet;
import java.awt.*;
public class LabelEx extends Applet
{
	
	Label l1=new Label("First Name: ");
	TextField t1=new TextField(30);

	public void init()
	{
		
		add(l1);
		add(t1);
		
		
	}
}



//<applet code="LabelEx" width="400" height="600"> </applet>



