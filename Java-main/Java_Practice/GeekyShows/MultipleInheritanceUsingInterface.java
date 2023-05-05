class MultipleInheritanceUsingInterface
{
	public static void main(String args[])
	{
		Son obj=new Son();
		obj.disp();
	}
}
class Father				//Super Class
{
	int a=10;				//Instance Variable
	int add(int y)			//Method with parameter
	{
		int b=y;			//Local Variable
		return(a+b);
	}
}
interface Mother			//Interface
{
	int c=30;				//Public static final
	void disp();			//Abstract Method
}
class Son extends Father implements Mother		//extends and implements together
{
	int m = a * Mother.c;	//accessing class and interface variable
	int sum= add(20);		//calling method from Father Super class
	public void disp()		//Defining interface abstract method
	{
		System.out.println("Addition= "+sum);
		System.out.println("Multiplication= "+m);
	}
}