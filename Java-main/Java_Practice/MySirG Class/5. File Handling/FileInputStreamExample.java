import java.io.*;
class FileInputStreamExample
{
	public static void main(String[] args) throws IOException
	{
		int i;
		FileInputStream fis = new FileInputStream("./File.txt");
		do{
			i=fis.read();
			if(i!=-1)
				System.out.print((char)i);
		}while(i!=-1);
		fis.close();
	}
}