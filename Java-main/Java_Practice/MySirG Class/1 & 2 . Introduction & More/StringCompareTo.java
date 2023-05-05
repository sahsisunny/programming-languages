public class StringCompareTo
{
	public static void main(String[] args)
	{
		String s1= new String("Computer");
		String s2= new String("computer");		//Character 'c' is lower case in s2
		int i=s1.compareTo(s2);
		if(i==0)
			System.out.println("String are same");
		else if(i>0)
			System.out.println("Opposite to Dictionary Order");
		else
			System.out.println("Dictionary Order");
	}
}