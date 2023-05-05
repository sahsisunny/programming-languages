class Greeting
{
	public void sayHello()
	{
		System.out.println("Hello XPRO");
	}
}
class India
{
	Greeting g = new Greeting(){
	public void sayHello()
	{
		System.out.println("Namaste");
	}	
	};
}
class AnonymoueClassExample
{
	public static void main(String[] args)
	{
		India india=new India();
		india.g.sayHello();
	}
}