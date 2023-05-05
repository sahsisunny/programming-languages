import java.util.Scanner;
class Account
{
	private int bal;
	public Account(int bal)
	{ this.bal=bal;}
	public boolean isSufficientBalance(int w)
	{
		if(bal>w)
			return(true);
		else
			return(false);
	}
	public void withdraw(int amt)
	{
		bal=bal-amt;
		System.out.println("Withdrawal Money is: "+amt);
		System.out.println("Your Current Balance is: "+bal);
	}
}
class Customer implements Runnable
{
	
	private String name;
	private Account account;
	public Customer(Account account, String n)
	{ 
		this.account=account;
		name = n;
	}
	public void run()
	{
		Scanner kb=new Scanner(System.in);

		synchronized(account)
		{
			System.out.print(name+" ,Enter Amount to Withdrawal: ");
			int amt=kb.nextInt();
			if(account.isSufficientBalance(amt))
			{
				System.out.println(name);
				account.withdraw(amt);
			}
			else
			{
				System.out.println("Insuffient Balance !!");
			}
		}
	}
}
public class Synchronized
{
	public static void main(String [] args)
	{
		Account a1 = new Account(1000);
		Customer c1=new Customer(a1, "Raj"),c2=new Customer(a1, "Simran");
		Thread t1 = new Thread(c1);
		Thread t2 = new Thread(c2);
		t1.start();
		t2.start();
	}
}














