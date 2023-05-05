import java.util.Scanner;
class DMAInJaggedArray{
	public static void main(String args[])
	{
		Scanner obj=new Scanner(System.in);
		System.out.print("Enter No. of Rows : ");
		int m=obj.nextInt();
		
		int num[][]= new int [m][];
		for(int i=0;i<m; i++)
		{
			System.out.print("No. of Elements in Row "+(i+1)+": ");
			int n=obj.nextInt();
			num[i]=new int [n];
		}
		System.out.println("Enter Values: ");
		for(int i=0;i<num.length;i++)
		{
			for(int j=0;j<num[i].length;j++)
			{
				num[i][j]=obj.nextInt();
			}
		}
		System.out.println("You Entered: ");
		for(int i=0;i<num.length;i++)
		{
			for(int j=0;j<num[i].length;j++)
			{
				System.out.print(num[i][j] +" ");
			}
			System.out.println();
		}
	}
}