class MethodOverloadingType2
{
	public static void main(String args[])	//Main Method
	{
		Addition obj = new Addition();
		obj.disp(10,20);
		obj.disp(5,2,2);
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
	void disp(int a,int b,int c)				//Instance Method
	{
		int x=a;
		int y=b;
		int z=c;
		int m=x*y*z;
		System.out.println("Multiplication = "+m);
	}
}