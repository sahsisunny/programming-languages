class MethodOverloadingType1
{
	public static void main(String args[])	//Main Method
	{
		Addition obj = new Addition();
		obj.disp(10,20);
		obj.disp(5,12.0f);
	}
}
class Addition
{
	void disp(int a,int b)					//Instance Method
	{
		int x=a,y=b;
		int z=x+y;
		System.out.println("Addition= "+z);
	}
	void disp(int a,float b)				//Instance Method
	{
		int x=a;
		float y=b;
		float z=x*y;
		System.out.println("Multiplication = "+z);
	}
}