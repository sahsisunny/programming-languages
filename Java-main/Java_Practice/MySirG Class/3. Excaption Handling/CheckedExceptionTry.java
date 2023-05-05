import java.io.*;
public class CheckedExceptionTry
{
	public static void main(String [] args)
	{
		try
		{
			throw new IOException();
		}
		catch (IOException e)
		{ System.out.println("Exception: "+e.getMessage()); }
	}
} 