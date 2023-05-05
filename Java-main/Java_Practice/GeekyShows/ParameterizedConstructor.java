class ParameterizedConstructor{
	public static void main(String args[])
	{
		Test obj=new Test(10,20);
	}
}
class Test{
	int x,y;					//Instance Variable
	Test(int a,int b)			//Parameterized Constructor
	{
		x=a;
		y=b;
		System.out.println("X: "+a);
		System.out.println("Y: "+b);
		System.out.println("Parameterized Constructor Invoked");		
	}
}