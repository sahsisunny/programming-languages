 import java.applet.Applet;
import java.awt.*;
public class ListEx extends Applet
{
	List language =new List();
	public void init()
	{
		language.add("Java");
		language.add("Python");
		language.add("PHP");
		language.add("C++");
		language.add("Ruby");
		language.add("HTML");
		language.add("CSS");
		add(language);
		language.setMultipleMode(true);
		language.select(3);
		
	}
	public void paint(Graphics g)
	{
		g.drawString("Store array in 3 no:- "+language.getItem(3),20,20);
		g.drawString("Total number of items:- "+language.countItems(),20,40);
		g.drawString("Results:- "+language.getSelectedIndex(),20,60);
	}
}

//<applet code="ListEx" width="400" height="600"> </applet>



