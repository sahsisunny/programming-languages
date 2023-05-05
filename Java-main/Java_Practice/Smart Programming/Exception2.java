import java.io.FileInputStream;
class Exception1
{
	public static void main(String [] args)
	{
		try
		{
			System.out.print(100/0);
		}
		catch(Exception e)
		{
			System.out.print(e);
		}
	}
}