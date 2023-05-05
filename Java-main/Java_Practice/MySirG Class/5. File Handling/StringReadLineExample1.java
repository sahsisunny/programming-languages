import java.io.*;
class StringReadLineExample1
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader bf = new BufferedReader(new FileReader("./File.txt"));
		char []s=new char[20];
		bf.read(s,0,15);
		System.out.println(s);
			bf.close();
	}
}