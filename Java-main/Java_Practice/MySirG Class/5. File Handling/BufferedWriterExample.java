import java.io.*;
class BufferedWriterExample
{
	public static void main(String[] args) throws IOException
	{
		FileWriter fw = new FileWriter("./File.txt",true);
		BufferedWriter bf = new BufferedWriter(fw);
		bf.write("Computer");
		bf.close();
	}
}