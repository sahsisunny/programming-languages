//This program is generate an  error because final class  is cannot be inherited.
class FinalClass
{
	public static void main(String args[])
	{
		Father f =new Father();
		Son s = new Son();
		f.cal();
		s.cal();
	}
}
final class Father		//Final Super Class
{
	int a=100;		//Instance Variable
	void cal()		//Method
	{
		System.out.println("Super Class Father\n");
	}
}
class Son extends Father	//Cannot inherit final Father class
{
	int b=200;
	void cal()			//Method Overriding
	{
		int sum=a+b;
		System.out.println("Sub class Son");
		System.out.println("Addition= "+sum);
	}
}