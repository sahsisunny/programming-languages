import java.io.IOException;
import java.io.File;
class FileHandling
{
	public static void main(String[] args) throws IOException
	{
		File f1=new File("E:/STUDY/Java Programming/Java Program/MySirG Class/5. File Handling/File.txt");
		f1.createNewFile();
		System.out.println("Can File Read: "+f1.canWrite());
		System.out.println("is File Read: "+f1.exists());
		System.out.println("File Name: "+f1.getName());
		System.out.println("Length of File: "+f1.length());
		//f1.delete();
	}
}