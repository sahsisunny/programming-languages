class MethodRetString
{
	public static void main(String args[])
	{
		Method obj  =new Method();
		System.out.println("First Name: "+obj.fname());
		String lastname=obj.lname("Sahsi");
		System.out.println("Last Name: "+lastname);
	}
}
class Method
{
	String fname()				//Instance Method
	{
		String s="Sunny";		//Local Variable
		return s;
	}
	String lname(String st)
	{
		String str=st;		//Local Variable
		return str;
	}
}