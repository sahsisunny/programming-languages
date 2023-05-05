 interface I1
 {
	 void f1();
 }
 interface I2
 {
	 void f2();
 }
class A implements I1, I2
{
	public void f1()
	{}
	public void f2()
	{}
	public void f3()
	{}
}
class InterfaceExample
{
	public static void main(String [] args)
	{
		I1 obj = new A();
		obj.f1();	// no error because I1 reference variable
		obj.f2();	//error
		obj.f3();	//error
	}
}