import java.util.Scanner;
class Q6{
	public static void main(String [] args){
		Scanner s=new Scanner(System.in);
		System.out.print("Enter th Number: ");
		int num=s.nextInt();
		int temp=0;
		for(int i=2;i<=num-1;i++){
			if(num%i==0){
				temp=temp+1;
			}
		}
		if(temp>0){
			System.out.println(num+" is not Prime Number.");
		}else{
			System.out.println(num+" is Prime Number.");
		}
		
		
	}
}

//System.out.println();