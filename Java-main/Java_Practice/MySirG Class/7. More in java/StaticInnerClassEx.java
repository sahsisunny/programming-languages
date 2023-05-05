class Outer
{
	static int x=10;
	static class Inner
	{
		int n;
		void f1i()
		{
			System.out.println("f1i"+x);
		}
	}
}
public class StaticInnerClassEx
{
	public static void main(String [] args)
	{
		Outer.Inner obj = new Outer.Inner();
		obj.f1i();
	}
}