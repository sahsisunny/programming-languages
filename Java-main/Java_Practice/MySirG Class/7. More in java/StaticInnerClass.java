class Outer
{
	static class Inner
	{
		int n;
		void f1i()
		{
			System.out.println("f1i");
		}
	}
}
public class StaticInnerClass
{
	public static void main(String [] args)
	{
		Outer.Inner obj = new Outer.Inner();
		obj.f1i();
	}
}