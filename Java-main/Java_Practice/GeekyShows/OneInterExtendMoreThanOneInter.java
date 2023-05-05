//No Output
class OneInterExtendMoreThanOneInter
{
	public static void main(String args[])
	{
		
	}
}
interface Father		//Cannot create an object because interface is abstract
{
	int mark=101;
	int roll=102;
	public void disp();
	int add(int x,int y);
}
interface Mother
{
	int a=103;
	void ab();
}
interface Son extends Father,Mother
{
	int arrendance = 75;
	void putdata();
}