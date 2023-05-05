public class GenericsMethod
{
	public <E> void printArray(E []s)	//Generics Method "E" for all types data types
	{
		for(E x:s)		//For each loop
		//for(int i=0;i<s.length;i++)
			System.out.println(x);
	}
	public static void main(String [] args)
	{
		GenericsMethod e1 = new GenericsMethod();
		String countries[]= new String[]{"India","Russia", "United State"};
		Integer numbers[]={11,22,33,44};
		e1.printArray(countries);
		e1.printArray(numbers);

	}
}

