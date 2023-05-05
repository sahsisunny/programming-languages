import java.util.Scanner;
class distance{
	int feet;
	int inch;
	void getDistance(){
		Scanner s=new Scanner(System.in);
		System.out.print("Enter the Feet: ");
		feet=s.nextInt();
		System.out.print("Enter the Inch: ");
		inch=s.nextInt();
	}
	void showDistance(){
		System.out.println("Feet: "+feet);
		System.out.println("Inch: "+inch);
	}
}
class Q9{
	public static void main(String [] args){
		distance d1=new distance();
		d1.getDistance();
		d1.showDistance();
	}
}

//System.out.println();