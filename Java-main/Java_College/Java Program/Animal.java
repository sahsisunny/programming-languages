class Animal
{
	void eat()
	{
		System.out.println("Eat Method");
	}
	public static void main(String args[])
	{
		System.out.println("Main Method");
		Animal buzo=new Animal();
		buzo.run();
		buzo.eat();
		Birds parrot=new Birds();
		parrot.fly();
	}
	void run()
	{
		System.out.println("Run method");
	}
}
class Birds
{
	void fly()
	{
		System.out.println("Fly Method");
	}
}