abstract class Person
{
	private String name;
	private int age;
	public void setName(String n) {name=n;}
	public void setAge(int a) { age=a;}
}
class AbstractClass
{
	public static void main(String [] args)
	{ Person p=new Person();}	//can't instantiated 
}