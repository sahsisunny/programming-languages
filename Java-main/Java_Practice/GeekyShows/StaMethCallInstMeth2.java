class StaMethCallInstMeth2{
	public static void main(String args[])
	{
		Test2 obj=new Test2();
		obj.disp();
	}
}
class Test
{
	static int add()		//Static Method
	{
		int x=10;
		int y=20;
		int z=x+y;
		return z;
	}
}
	class Test2
{
	void disp()				//Instance Method
	{
		int a= Test.add();		//Calling Static Method
		System.out.println("Addition = "+a);
	}		
}