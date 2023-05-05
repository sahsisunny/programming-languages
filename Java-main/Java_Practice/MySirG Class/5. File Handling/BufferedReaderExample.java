import java.io.*;
class BufferedReaderExample
{
	public static void main(String[] args) throws IOException
	{
		int ch;
		FileReader fw = new FileReader("./File.txt");
		BufferedReader bf = new BufferedReader(fw);
		while((ch=bf.read())!=-1){
			System.out.print((char)ch);
		}
		bf.close();
	}
}