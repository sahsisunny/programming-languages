//No Output
class OneInterExtendOneInter
{
	public static void main(String args[])
	{
		
	}
}
interface Father		//Cannot create an object because interface is abstract
{
	//public static final int mark=101;		//9 & 10 line is same
	int mark=101;
	int roll=102;
	public void disp();
	void putdata();
	int add(int x,int y);
}
interface Son extends Father
{
	int arrendance = 75;
	void putdata();
}