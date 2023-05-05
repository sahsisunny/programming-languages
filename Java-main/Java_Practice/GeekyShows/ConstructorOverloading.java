class ConstructorOverloading{
	public static void main(String args[])
	{
		Test obj = new Test(10);
		Test obj1 = new Test(10,20);
		Test obj2 = new Test(10.56f);
	}
}
class Test
{
	int x,y,z;			//Instance Variable
	float k;			//Instance Variable
	
	Test(int b,int c)		//Parameterized Constructor
	{
		x=b;
		y=c;
		System.out.println("X: "+x);
		System.out.println("Y: "+y);
	}
	
	Test(int a)				//Parameterized Constructor
	{
		z=a;
		System.out.println("Z: "+z);
	
	}
	Test(float f)			//Parameterized Constructor
	{
		k=f;
		System.out.println("K: "+k);
	}
}