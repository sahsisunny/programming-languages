class Employee
{
	int id;
	String name;
	double salary;
	Employee()
	{
		id=0;
		name=null;
		salary=0.00;
	}
Employee(int i, String n, double s)
{
	id= i;
	name=n;
	salary=s;
}
	Employee(Employee E)
	{
		id=E.id;
		name=E.name;
		salary=E.salary;
	}
void show()
{
	System.out.println("ID	:"+id);
	System.out.println("NAME	:"+name);
	System.out.println("SALARY	:"+salary);
}
}
class MainClass
{
	public static void main(String args[])
	{
		Employee E1=new Employee();
		Employee E2=new Employee(1,"Sunny Sahsi",50000.00);
		Employee E3=new Employee(E2);
		E1.show();
		E2.show();
		E3.show();
	}
}