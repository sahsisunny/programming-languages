class A
{
	public void f1(int x)
	{
		System.out.println("Class A");
	}
}
class B extends A
{
	public void f1(int x, int y)
	{
		System.out.println("Class B");
	}
}
public class Overloading
{
	public static void main(String [] args)
	{
		B obj = new B();
		obj.f1(5,3);
		obj.f1(2);
	}
}
