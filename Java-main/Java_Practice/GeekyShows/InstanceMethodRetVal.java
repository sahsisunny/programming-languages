class InstanceMethodRetVal
{
	public static void main(String args[])
	{
		InstanceMethod obj=new InstanceMethod();
		System.out.println("Addition = "+obj.add());
		System.out.println("Multiplication = "+obj.multi(5));
	}
}
class InstanceMethod
{
	int add()			//Instance Method without parameter
	{
		int a=10, b=20;	//Local Variable
		return(a+b);
	}
	int multi(int p)	//Instance Method with parameter
	{
		int k=p;		//Local Variable
		return(k*k);
	}
}