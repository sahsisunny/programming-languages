public class StringCompareEqualMethod
{
	public static void main(String[] args)
	{
		String s1= new String("Computer");
		String s2= new String("computer");		//Character 'c' is lower case in s2
		if (s1.equals(s2))
			System.out.println("String are same");
		else
			System.out.println("String are not same");
	}
}