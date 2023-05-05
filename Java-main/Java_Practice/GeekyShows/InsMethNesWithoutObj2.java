class InsMethNesWithoutObj2
{
	public static void main(String args[])	//Main Method
	{
		Addition obj = new Addition();
		obj.disp();
	}
}
class Addition
{
	void disp()					//Instance Method
	{
		Addition1 obj1 = new Addition1();
		int x=obj1.add();		//Calling instance Method
								//Inside Instance Method
		System.out.println("Addition= "+x);
	}
}
class Addition1
{
	int add()					//Instance Method
	{
		int a=10,b=20;
		int z=a+b;
		return z;
	}
}