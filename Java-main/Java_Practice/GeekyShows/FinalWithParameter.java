class FinalWithParameter
{
	public static void main(String args[])
	{
		Test obj = new Test();
		obj.disp(10);
	}
}
class Test{
	void disp(final int a)
	{
		System.out.println("Roll= "+a);
	}
}