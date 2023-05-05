class OurThrowOurCatch
{
	public static void main(String [] args)
	{
		int balance = 5000;
		int withdrawlAmount = 9000;
		try
		{
		if(balance<withdrawlAmount)
			throw new ArithmeticException("Insufficient Balance");
		balance= balance-withdrawlAmount;
		System.out.println("Transaction Successfully Completed");
		}
		catch(ArithmeticException e)
		{
			System.out.println("Exception: "+e.getMessage());
		}
		System.out.println("Program Continue.........");
	}
}