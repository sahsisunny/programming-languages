import java.applet.Applet;
import java.awt.*;
public class ChoiceEx extends Applet
{
	Choice language =new Choice();
	public void init()
	{
		language.addItem("Java");
		language.addItem("Python");
		language.addItem("PHP");
		language.addItem("C++");
		language.addItem("Ruby");
		language.addItem("HTML");
		language.addItem("CSS");
		add(language);
		language.select(6);
		
	}
	public void paint(Graphics g)
	{
		g.drawString("Store array in 3 no:- "+language.getItem(3),20,20);
		g.drawString("Total number of items:- "+language.countItems(),20,40);
		g.drawString("Results:- "+language.getSelectedIndex(),20,60);
	}
}

//<applet code="ChoiceEx" width="400" height="600"> </applet>



