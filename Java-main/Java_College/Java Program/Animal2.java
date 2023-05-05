class Animal
{
	String color;
	int age;
	void initObject(String c, int a)
	{
		color=c;
		age=a;
	}
	void display()
	{
		System.out.println(color+" "+age);
	}
	public static void main(String args[])
	{
		Animal buzo=new Animal();
		buzo.initObject("Black",10);
		buzo.display();
	}
}