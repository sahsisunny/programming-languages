class Animal
{
	String color;
	int age;
	public static void main(String args[])
	{
		System.out.println("Main Method");
		Animal buzo=new Animal();
		buzo.color="Black";
		buzo.age=10;
		System.out.println(buzo.color+" "+buzo.age);
	}
}