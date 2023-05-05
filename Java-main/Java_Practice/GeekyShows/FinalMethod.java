//This program is generate an error because final keyword is cannot be override.
class FinalMethod
{
	public static void main(String args[])
	{
		Father f =new Father();
		Son s = new Son();
		f.cal();
		s.cal();
	}
}
class Father		//Super Class
{
	int a=100;		//Instance Variable
	final void cal()		//Method
	{
		System.out.println("Super Class Father\n");
	}
}
class Son extends Father	//Sub class Son
{
	int b=200;
	void cal()			//Method Overriding is generate error
	{
		int sum=a+b;
		System.out.println("Sub class Son");
		System.out.println("Addition= "+sum);
	}
}