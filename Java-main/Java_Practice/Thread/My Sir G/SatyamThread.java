class A extends Thread
{
	public static void main(String [] args)
	{
		A ThreadA = new A();
		ThreadA.start();
	}
	public void run()
	{
		System.out.println("My Thread");
	}
}