class SingleInheritance{
	public static void main(String args[])
	{
		Son obj= new Son();
		obj.getdata(10,20);		//Calling Method of Super Class
		obj.disp();				//Calling Method of Sub Class
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
class Son extends Father		//Sub class
{
	int add()			//Method
	{
		int sum=a+b;		//a & b Variable Inherit from Father Class
		return sum;
	}
	void disp()			//Method
	{
		System.out.println("A= "+a);
		System.out.println("B= "+b);
		System.out.println("Sum= "+add());
	}
}