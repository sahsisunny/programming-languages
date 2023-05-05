import javax.swing.*;

public class SwingExample extends JFrame 
{
	JLabel l1,l2,l3,l4;
	JTextField t1,t2;
	JButton b1;
	public SwingExample() { }
	public SwingExample(String s)
	{	super(s);	}
	public void setComponents(){
			l1=new JLabel("Addition of two numbers.");
			l1=new JLabel("First Number");
			l1=new JLabel("Second Number.");
			l1=new JLabel();
			t1=new JTextField();
			t2=new JTextField();
			b1=new JButton("Add");
			//setLayout(null);
			//l1.setBounds(50,50,200,20);
			
			add(l1);
			add(l2);
			add(t1);
			add(l3);
			add(t2);
			add(b1);
			add(l4);
		}
	public static void main(String[] args)
	{
		SwingExample jf = new SwingExample("Swing Example");
		jf.setComponents();
		
		
		jf.setSize(300,400);
		jf.setVisible(true);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}