class FactoriCLA
{
	public static void main(String args[])
	{
		int num,fact=1;
		num=Integer.parseInt(args[0]);
		while(num>1)
		{
			fact*=num;
			num--;
		}
		System.out.println(fact);
	}
}