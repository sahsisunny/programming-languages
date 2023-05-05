import java.util.Scanner;
class DMAIn2DArray{
	public static void main(String args[])
	{
		Scanner obj=new Scanner(System.in);
		System.out.print("Enter No. of Rows	: ");
		int m=obj.nextInt();
		System.out.print("Enter No. of Column	: ");
		int n=obj.nextInt();
		int num[][]= new int[m][n];
		System.out.println("Enter Values: ");
		for(int i=0;i<num.length;i++)		//num.length=m
		{
			for(int j=0;j<num[0].length;j++)	//num[0].length=n
			{
				num[i][j]=obj.nextInt();
			}
		}
		System.out.println("You Entered: ");
		for(int i=0;i<num.length;i++)
		{
			for(int j=0;j<num[0].length;j++)
			{
				System.out.print(num[i][j] +" ");
			}
			System.out.println();
		}
	}
}