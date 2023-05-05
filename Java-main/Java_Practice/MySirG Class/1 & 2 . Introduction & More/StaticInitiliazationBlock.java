public class StaticInitiliazationBlock {
	private static int x;
	static
	{
		System.out.println("Static Initiliazation Block:x= "+x);
		x=10;
	}
	public static void main(String[] args) 
	{
		new StaticInitiliazationBlock();

	}
}