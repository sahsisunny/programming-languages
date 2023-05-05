class Parent{
	static int y=4;
}
class Child extends Parent{
	static
	{ y=5;}
}
	public class StaticVariable{
		public static void main(String [] args){
			System.out.println("y= "Child.y);	//y=4

	}
}