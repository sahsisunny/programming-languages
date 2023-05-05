public class FinalStaticVariable
{
	//private int x;	// Instance Variable
	private final int x;	//Final Instance Variable
	//private static int y; 	//Static variable
	private final static int y; 	//Final Static variable
	static
	{x=5;}
	FinalStaticVariable()
	{x=5;}
	public static void main(String [] args)
	{
		FinalStaticVariable e1 = new FinalStaticVariable();
	}
}
