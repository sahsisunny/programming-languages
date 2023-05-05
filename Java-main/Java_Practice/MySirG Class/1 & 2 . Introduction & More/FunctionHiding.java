class Parent{
	public static void f1(){
		System.out.println("Hello Sunny");
	}
}
class Child extends Parent{
	public static void f1(){
		System.out.println("Hello Child");
	}
}
	public class FunctionHiding{
		public static void main(String [] args){
			Child.f1();
	}
}