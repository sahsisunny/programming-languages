class InsMethNesWithoutObj
{
	public static void main(String args[])	//Main Method
	{
		Addition obj = new Addition();
		obj.disp();
	}
}
class Addition
{
	int add()				//Instance Method
	{
		int a=10,b=20;
		int z=a+b;
		return z;
	}
	void disp()		//Instance Method
	{
		int x=add();		//Calling instance Method
							//Inside Instance Method
		System.out.println("Addition= "+x);
	}
}