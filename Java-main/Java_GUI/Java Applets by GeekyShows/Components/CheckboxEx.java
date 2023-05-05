import java.applet.Applet;
import java.awt.*;
public class CheckboxEx extends Applet
{
	
	Checkbox c1=new Checkbox("Java");
	Checkbox c2=new Checkbox("Python");
	Checkbox c3=new Checkbox("PHP");
	Checkbox c4=new Checkbox("C++");

	public void init()
	{
		
		c1.setState(true);
		add(c1);
		add(c2);
		add(c3);
		add(c4);
		
		
	}
}



//<applet code="CheckboxEx" width="400" height="600"> </applet>



