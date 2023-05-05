class InstanceVariable{
	public static void main(String args[]){
		Test obj=new Test();
		obj.mark=200;
		System.out.print("Roll = "+obj.roll);
		System.out.print("\nMarks = "+obj.mark);
	}
		
}
class Test{
	int roll=10;	//Instance Variable
	int mark;		//Instance Variable
}