class InstanceMethodWithPara
{
	public static void main(String args[])	//Main Method
	{
		InstanceMethodWithPara obj = new InstanceMethodWithPara();
		obj.disp(10,20);	//Calling Instance Method and passing value
		System.out.println("HYDRA | XPRO");
	}
	void disp(int a,int b)	//Instance Method
	{
		int x=a;			//Local Variable
		int y=b;			//Local Variable
		int z=x+y;			//Local Variable
		System.out.println(z);
	}
}