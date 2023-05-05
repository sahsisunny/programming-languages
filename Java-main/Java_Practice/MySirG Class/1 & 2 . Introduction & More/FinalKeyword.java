final class Dummy //No create subclass of final class
{
	
} 
class Dummys
{
	public final void someFunction()
	{
		
	}
} 
class MoreDummy extends Dummys
{
	{
		public void someFunction()	//Cannot Override the function because this function is final
	}
}
/**
public class FinalKeyword
{
	//private int x;	// Instance Variable
	private final int x;	//Final Instance Variable
	//private static int y; 	//Static Variable
	private final static int y; 	//Final Static Variable
	static
	{x=5;}
	FinalKeyword()
	{x=5;}
	public void fun()
	{
		//int z;	//Local Variable
		final int z;	//Final Local Variable
		
	}
	public static void main(String [] args)
	{
		FinalKeyword e1 = new FinalKeyword();
	}
}
*/
