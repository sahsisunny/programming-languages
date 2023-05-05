class AccessInterfaceVariable
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
class Son implements Father,Mother
{
	
	int sum = mark + mark1;
	//int sum=Father.mark+Mother.mark1;			//Both are true when variable name is not same otherwise upper line is wrong.
	public void disp()
	{
		System.out.println("Roll= "+Father.roll);
	}
	public void add()
	{
		System.out.println("Total Mark= "+sum);
	}
}