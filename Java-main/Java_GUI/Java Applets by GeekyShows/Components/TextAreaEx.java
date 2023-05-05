import java.applet.Applet;
import java.awt.*;
public class TextAreaEx extends Applet
{
	TextArea t1=new TextArea();
	TextArea t2=new TextArea(20,50);
	TextArea t3=new TextArea("Welcome to Root Level");
	public void init()
	{
		add(t1);
		add(t2);
		add(t3);
		
		
	}
}



//<applet code="TextAreaEx" width="500" height="800"> </applet>



