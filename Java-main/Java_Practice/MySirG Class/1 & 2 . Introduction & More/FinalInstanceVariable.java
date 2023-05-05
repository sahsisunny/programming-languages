public class FinalInstanceVariable
{
	//private int x;	// Instance Variable
	private final int x;	//Final Instance Variable
	FinalInstanceVariable()
	{x=5;}
	public static void main(String [] args)
	{
		FinalInstanceVariable e1 = new FinalInstanceVariable();
	}
}
