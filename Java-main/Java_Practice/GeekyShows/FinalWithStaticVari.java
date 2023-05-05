class FinalWithStaticVari
{
	public static void main(String args[])
	{
		Test obj = new Test();
		System.out.println("Roll = "+obj.roll);
	}
}
class Test
{
	static final int roll;
	static
	{
		roll=101;		//cannot changed value
	}
	
}