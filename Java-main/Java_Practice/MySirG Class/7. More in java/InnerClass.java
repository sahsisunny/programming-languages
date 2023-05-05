class Outer {
	int x=10;
	class Inner {
		int n;
		void f1i(){
			System.out.println("f1i "+x);
		}
	}
}
public class InnerClass {
	public static void main(String [] args) {
		Outer out = new Outer();
		Outer.Inner obj = out.new Inner();
		obj.f1i();
	}
}