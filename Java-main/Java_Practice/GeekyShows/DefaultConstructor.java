class DefaultConstructor{
	public static void main(String args[])
	{
		Test obj=new Test();
	}
}
class Test{
	int a;			//Instance Variable
	Test()			//Default Constructor
	{
		a=10;
		System.out.println("A: "+a);
		System.out.println("Default Constructor Invoked");		
	}
}