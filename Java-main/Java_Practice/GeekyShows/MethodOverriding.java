  class MethodOverriding
{
	public static void main(String args[])
	{
		Father f =new Father();
		Son s = new Son();
		Daughter d = new Daughter();
		f.cal();
		s.cal();
		d.cal();
	}
}
class Father		//Super Class
{
	int a=100;		//Instance Variable
	void cal()		//Method
	{
		System.out.println("Super Class Father\n");
	}
}
class Son extends Father	//Sub class Son
{
	int b=200;
	void cal()			//Method Overriding
	{
		int sum=a+b;
		System.out.println("Sub class Son");
		System.out.println("Addition= "+sum);
	}
}
class Daughter extends Father	//Sub class
{
	int c = 20;
	void cal()			//Method Overriding
	{
		int mult=a*c;
		System.out.println("\nSub Class Daughter");
		System.out.println("Multiplication= "+mult);
	}
}