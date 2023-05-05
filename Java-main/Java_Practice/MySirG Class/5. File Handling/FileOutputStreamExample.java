import java.io.*;
class FileOutputStreamExample
{
	public static void main(String[] args) throws IOException
	{
		int i;
		FileOutputStream fout = new FileOutputStream("./File.txt",true);
		String s="TATA";
		char ch[]=s.toCharArray();
		for(i=0;i<s.length();i++)
			fout.write(ch[i]);
		fout.close();
	}
}