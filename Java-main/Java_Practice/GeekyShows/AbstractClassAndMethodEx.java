class AbstractClassAndMethodEx
{
	public static void main(String args[])
	{
		Son s = new Son();
		Daughter d = new Daughter();
		s.disp();
		d.disp();
	}
}
abstract class Father		//Super Class, abstract Class
{
	abstract void disp();	//abstract Method
}
class Son extends Father	//Sub class Son
{
	void disp()
	{
		System.out.println("Abstract Method Defined on Sub Class Son");
	}
}
class Daughter extends Father	//Sub class Daughter
{
	void disp()
	{
		System.out.println("Abstract Method Defined on Sub Class Daughter");
	} 
}