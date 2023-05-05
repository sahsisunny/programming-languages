class StaticVariable{
	public static void main(String args[]){
		Test obj=new Test();
		Test.roll=200;
		System.out.print("Roll = "+obj.roll);
		System.out.print("\nMarks = "+obj.mark);
	}
		
}
class Test{
	static int roll=10;		//Static Variable
	static int mark=50;		//Static Variable
}