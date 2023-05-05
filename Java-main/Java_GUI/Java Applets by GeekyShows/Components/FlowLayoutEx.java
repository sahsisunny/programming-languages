import java.applet.Applet;
import java.awt.*;
public class FlowLayoutEx extends Applet
{
	FlowLayout f1 = new FlowLayout(FlowLayout.LEFT,40,40);
	Button b1=new Button("Submit");
	Button b2=new Button("Reset");
	Button b3=new Button("Erase");
	Button b4=new Button("Run");
	Button b5=new Button("Back");
	public void init()
	{
		this.setLayout(f1);
		add(b1);
		add(b2);
		add(b3);
		add(b4);
		add(b5);
		
		
	}
}



//<applet code="FlowLayoutEx" width="500" height="800"> </applet>



