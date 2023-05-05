import java.applet.Applet;
import java.awt.*;
public class CheckboxGroupEx extends Applet
{
	CheckboxGroup cg =new CheckboxGroup();
	Checkbox c1=new Checkbox("Java",cg,true);
	Checkbox c2=new Checkbox("Python",cg,false);
	Checkbox c3=new Checkbox("PHP",cg,false);
	Checkbox c4=new Checkbox("C++",cg,false);

	public void init()
	{
		
		add(c1);
		add(c2);
		add(c3);
		add(c4);
		
		
	}
}



//<applet code="CheckboxGroupEx" width="400" height="600"> </applet>



