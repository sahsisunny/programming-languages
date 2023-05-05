//-----------Wrong Code---------------------//

class Person
{
	//..............
	abstract void show();
}
class Student extends Person
{
	//................
}
class AbstractMethodError
{
	public static void main(String[] args)
	{
		Student s = new Student();
	}
}

//-------------------Right Code---------------------//

abstract class Person
{
	abstract void show();
}
class Student extends Person
{
	void show()
	{ //Some Code}
}
class AbstractMethodError
{
	public static void main(String[] args)
	{
		Student s = new Student();
		s.show();
	}
}