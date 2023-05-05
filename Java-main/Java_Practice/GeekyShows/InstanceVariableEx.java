class InstanceVariableEx{
	public static void main(String args[]){
		Test obj=new Test();
		Test obj1=new Test();
		obj1.mark=300;
		obj1.roll=20;
		obj.mark=200;
		System.out.print("Roll = "+obj.roll);
		System.out.print("\nMarks = "+obj.mark);
		System.out.print("\nRoll = "+obj1.roll);
		System.out.print("\nMarks = "+obj1.mark);
	}
		
}
class Test{
	int roll=10;	//Instance Variable
	int mark;		//Instance Variable
}