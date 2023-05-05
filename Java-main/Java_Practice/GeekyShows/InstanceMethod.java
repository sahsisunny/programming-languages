class InstanceMethod
{
	public static void main(String args[])	//Main Method
	{
		InstanceMethod obj = new InstanceMethod();
		obj.disp();		//Calling Instance Method
		System.out.println("HYDRA | XPRO");
	}
	void disp()			//Instance Method
	{
		int a=99;		//Local Variable
		System.out.println(+a+"%");
	}
}