class MultilevelInheritance
{
	public static void main(String args[])
	{
		GrandSon obj= new GrandSon();
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
class Son extends Father		//Intermediate Sub class
{
	int c=30;			//Member of Son Class
	int add()			//Method
	{
		int sum=a+b+c;	//a & b Variable Inherit from Father Class
		return sum;
	}
}
class GrandSon extends Son	//Sub class
{
	void disp()				//Method
	{
		System.out.println("A= "+a);
		System.out.println("B= "+b);
		System.out.println("C= "+c);
		System.out.println("Sum= "+add());
	}
}