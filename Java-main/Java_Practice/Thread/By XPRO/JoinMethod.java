class A extends Thread
{
	public void run()
	{
		for(int i=1;i<=5;i++)
		{
			System.out.println("Thread A "+i);
			try
			{
				Thread.sleep(2000);
			}
			catch(InterruptedException e) {}
		}
	}
}
class B extends Thread
{
	public void run()
	{
		for(int i=1;i<=5;i++)
		{
			System.out.println("Thread B "+i);
		}
	}
}
public class JoinMethod extends Thread
{
	public static void main(String [] args) throws InterruptedException
	{
		A t1 = new A();
		B t2 = new B();
		t1.start();
		t2.start();
		t2.join(6000);
	}
}