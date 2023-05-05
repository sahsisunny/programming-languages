import java.applet.Applet;
import java.awt.*;
public class GridLayoutEx extends Applet
{
	GridLayout f1 = new GridLayout(2,2,20,20);
	Button b1=new Button("Submit");
	Button b2=new Button("Reset");
	Button b3=new Button("Erase");
	Button b4=new Button("Run");
	
	public void init()
	{
		setLayout(f1);
		add(b1);
		add(b2);
		add(b3);
		add(b4);
	
		
		
	}
}



//<applet code="GridLayoutEx" width="500" height="800"> </applet>



