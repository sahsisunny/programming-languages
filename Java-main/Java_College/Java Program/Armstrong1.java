import java.util.Scanner;
class Armstrong1
{
	public static void main(String [] args)
	{
		Scanner s= new Scanner(System.in);
		System.out.println("Enter number: ");
		int n= s.nextInt();
		int temp=n,sum=0,rem;
		while(n>0)
		{
			rem=n%10;
			sum=sum+(rem*rem*rem);
			n=n/10;
		}			
		if(temp==sum)
		{
			System.out.println(temp+" is Armstrong");
		}
		else
		{
			System.out.println(temp+" is not Armstrong");
		}
	}
}