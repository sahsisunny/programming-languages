class Logical
{
	public static void main(String args[])
	{
		int a=5,b=2;
		boolean LogicalAND=a<b && a>b;
		boolean LogicalOR=a<b || a>b;
		boolean LogicalNOT=!(5<2);
		boolean LogicalNOT1=!(5>2);
		System.out.println("Logical AND = "+LogicalAND);
		System.out.println("Logical OR = "+LogicalOR);
		System.out.println("Logical NOT = "+LogicalNOT);
		System.out.println("Logical NOT 2 = "+LogicalNOT1);

	}
}