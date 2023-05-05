class A
{
	int z;
	public void f2()
	{
		
	}
}
class B extends A
{
	int z;
	public void f1()	//no static
	{
		super.f1();
	}
	public void f2()
	{
		int z;
		z=2;
		this.z=3;  //class B z variable
		super.z=4;	//class A z variable
	}
}
class SuperKeyword
{
	public static void main(String [] args)
	{
		b obj = new B();
		obj.f1();
	}
}