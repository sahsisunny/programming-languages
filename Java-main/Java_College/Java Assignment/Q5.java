import java.util.Scanner;
class Q5{
	public static void main(String [] args){
		Scanner s=new Scanner(System.in);
		System.out.print("Enter Decimal Number: ");
		int dec=s.nextInt();
		int temp=dec;
		String bin="";
		while(temp>0){
			int n=temp%2;
			temp=temp/2;
			bin=n+bin;
		}
		System.out.println("Binary Number is "+bin);
	}
}

//