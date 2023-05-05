class OneClassMoreThanOneInterface
{
	public static void main(String args[])
	{
		Son obj=new Son();
		obj.disp();
		obj.add();
	}
}
interface Father
{
	public static final int mark=100;
	int roll=121;
	void disp();
}
interface Mother
{
	int mark1= 200;
	void add();
}
class Son implements Father
{
	
	int sum=Father.mark+Mother.mark1;
	public void disp()
	{
		System.out.println("Roll= "+Father.roll);
	}
	public void add()
	{
		System.out.println("Total Mark= "+sum);
	}
}