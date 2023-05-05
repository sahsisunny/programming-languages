import java.io.*;
class Q14
{
	public static void main(String[]args){
		//boxing
		Integer a= new Integer.parseInt(12);
		Character b=new Character.parseChar('x');
		Double c=new Double.parseDouble(0.5);
		Float d=new Float.parseFloat(2.5f);
		System.out.println("integer value is "+a);
		System.out.println("character value is "+b);
		System.out.println("double value is "+c);
		System.out.println("float value is "+d+"\n");
		//unboxing
		int a1=a;
		char b1=b;
		double c1=c;
		float d1=d;
		System.out.println("integer value is "+a);
		System.out.println("character value is "+b);
		System.out.println("double value is "+c);
		System.out.println("float value is "+d);
	}
}