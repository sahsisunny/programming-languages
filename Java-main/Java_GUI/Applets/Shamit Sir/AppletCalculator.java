import java.awt.*;
import java.applet.*;
import java.awt.event.*;

/*<applet code="AppletCalculator.class" height=300 width=300></applet>*/

public class AppletCalculator extends Applet implements ActionListener
{
	Frame     f; //creating applet window
	Panel     p; //creating container within applet window for placing the GUI components	
	TextField t1,t2,t3;
	Label     l1,l2,l3;
	Button    b1, b2, b3, b4, b5;
	int       x, y, res; 
	public void init(){
		f=new Frame("Calculator");
		f.setSize(300,300);
		f.setVisible(true);   	//applet window shown
		p=new Panel();		
		f.add(p);		//container added onto the applet window
		t1=new TextField(10);
   		t2=new TextField(10);
		t3=new TextField(10);
		l1=new Label("Enter No. 1");
   		l2=new Label("Enter No. 2");
		l3=new Label("Result");
		b1=new Button("+");
		b2=new Button("-");
		b3=new Button("x");
		b4=new Button("/");
		b5=new Button("Exit");
		p.add(l1);
		p.add(t1);
		p.add(l2);
		p.add(t2);
		p.add(l3);
		p.add(t3);		
		p.add(b1);
		p.add(b2);
		p.add(b3);
		p.add(b4);
		p.add(b5);
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b4.addActionListener(this);
		b5.addActionListener(this);
	}
	public void actionPerformed(ActionEvent ae){
		x=Integer.parseInt(t1.getText());
		y=Integer.parseInt(t2.getText());
		if(ae.getSource() == b1) res = x + y;	
		if(ae.getSource() == b2) res=x-y;
		if(ae.getSource() == b3) res=x*y;
		if(ae.getSource() == b4) res=x/y;
		t3.setText(String.valueOf(res));		
	}
	public static void main(String args[]){
		AppletCalculator ac = new AppletCalculator();
	}
}