class StaticMethodNes2
{
	public static void main(String args[])		//Static Method
	{
		disp();
		Test.play();			//Object of Test class
	}
	static void disp()			//Static Method
	{
		int x=100;
		System.out.println("Value of A= "+x);
	}
}
class Test					//Another Class
{
	static void play()			//Static Method with another class
	{
		int z=200;
		System.out.println("Value of B= "+z);
	}
}