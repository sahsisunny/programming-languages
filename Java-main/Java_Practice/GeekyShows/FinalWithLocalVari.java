class FinalWithLocalVari
{
	public static void main(String args[])
	{
		Test obj = new Test();
		obj.disp();
	}
}
class Test
{
	void disp()
	{
		final int roll;		//Local Variable
		roll=101;		//Initialize any where before using and value cannot changed because final keyword
		System.out.println("Roll= "+roll);
	}
	
}