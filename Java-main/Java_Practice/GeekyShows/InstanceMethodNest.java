class InstanceMethodNest
{
	public static void main(String args[])	//Main Method
	{
		Addition obj = new Addition();
		obj.disp(20);
	}
}
class Addition
{
	void disp(int a)		//Instance Method
	{
		int x=10,y=a;		//Local Variable
		int z=x+y;			//Local Variable
		System.out.println("Addition = "+z);
	}
}