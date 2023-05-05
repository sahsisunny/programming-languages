class Parent{
	public static void f1(){
		System.out.println("Hello Sunny");
	}
}
class Child extends Parent{
}
	public class StaticInheritance{
		public static void main(String [] args){
			Child.f1();
	}
}