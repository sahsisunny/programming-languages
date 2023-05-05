class A extends Thread
{
	public void run()
	{
		int i;
		for(i=1;i<=10;i++)
			System.out.println("i= "+i+"Thread A");
	}
}
class B extends Thread
{
	public void run()
	{
		int i;
		for(i=1;i<=10;i++)
			System.out.println("i= "+i+"Thread B");
	}
}
public class ThreadClass
{
	public static void main(String [] args)
	{
		A t1 = new A();
		B t2 = new B();
		t1.start();
		t2.start();
	}
}