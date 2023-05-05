class HierarchicalInheritance
{
	public static void main(String args[])
	{
		
		Son objs= new Son();
		objs.getdata(10,20);		//Calling Method of Super Class Father
		objs.disp();				//Calling Method of Sub Class Son
		Daughter objd= new Daughter();
		objd.getdata(10,5);			//Calling Method of Super Class Father
		objd.disp();				//Calling Method of Sub Class Daughter
	}
}
class Father		//Super Class
{
	int a,b;
	void getdata(int x, int y)	//Method With Parameter
	{
		a=x;
		b=y;
	}
}
class Son extends Father	//Sub class
{
	int add()			//Method
	{
		int sum=a+b;	//a & b Variable Inherit from Father Class
		return sum;
	}
	void disp()				//Method
	{
		System.out.println("A= "+a);
		System.out.println("B= "+b);
		System.out.println("Sum= "+add());
	}
}
class Daughter extends Father	//Sub class
{
	int mult()				//Method
	{
		return(a*b);		//a & b Variable Inherit from Father Class
	}
	void disp()				//Method
	{
		System.out.println("A= "+a);
		System.out.println("B= "+b);
		System.out.println("Multiplication= "+mult());
	}
}