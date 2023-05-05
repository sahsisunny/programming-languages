import java.util.Scanner;
class Q4{
	public static void main(String [] args){
		Scanner s=new Scanner(System.in);
		System.out.print("Enter Rows: ");
		int m=s.nextInt();
		System.out.print("Enter Columns: ");
		int n=s.nextInt();
		int num[][]=new int[m][n];
		for(int i=0;i<num.length;i++){
			for(int j=0;j<num[0].length;j++){
				num[i][j]=s.nextInt();
			}
		}
		System.out.println("You Entered:- ");
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				System.out.print(num[i][j]+" ");
			}
			System.out.println();
		}
	}
}

//