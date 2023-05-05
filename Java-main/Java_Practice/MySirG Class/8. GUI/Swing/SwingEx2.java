import javax.swing.*;

public class SwingEx2 extends JFrame 
{
	public SwingEx2() { }
	public SwingEx2(String s)
	{
		super(s);
	}
	public static void main(String[] args)
	{
		SwingEx2 jf = new SwingEx2("Swing Example");
		jf.setSize(300,400);
		jf.setVisible(true);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}