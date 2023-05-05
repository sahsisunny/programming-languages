class StaMethCallInstMeth{
	public static void main(String args[])
	{
		Test obj=new Test();
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
	void disp()				//Instance Method
	{
		int a= add();		//Calling Static Method
		System.out.println("Addition = "+a);
	}		
}