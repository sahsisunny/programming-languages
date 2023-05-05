class OurThrowDefaultCatch
{
	public static void main(String [] args)
	{
		int balance = 5000;
		int withdrawlAmount = 9000;
		if(balance<withdrawlAmount)
			throw new ArithmeticException("Insufficient Balance");
		balance= balance-withdrawlAmount;
		System.out.println("Transaction Successfully Completed");
		System.out.println("Program Continue.........");
	}
}