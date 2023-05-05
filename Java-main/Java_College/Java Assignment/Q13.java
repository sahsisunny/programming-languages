class Addition
{
	static int sum=0;
	public static void add(int...k) // variable length argument..
	{
		for(int i : k)
		{
			sum = sum+i;
		}
		System.out.print("sum is "+sum);
	}
}
class Q13
{
	public static void main(String[]args)
	{
		Addition.add(1,2,3,4,5,6,7,8,9,10); // calling static method/function by class name..
	}
}