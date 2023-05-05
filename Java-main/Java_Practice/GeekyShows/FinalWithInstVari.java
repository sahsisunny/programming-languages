class FinalWithInstVari
{
	public static void main(String args[])
	{
		Test obj = new Test();
		System.out.println("Roll = "+obj.roll);
	}
}
class Test
{
	//final int roll=101;		//its value is changed through create new object 
	final int roll;
		Test()
		{
			roll=101;		//its value is cannot changed.
		}
}