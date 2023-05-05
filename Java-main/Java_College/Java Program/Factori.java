import java.io.*;
class Factori
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader ir;
		ir=new InputStreamReader(System.in);
		BufferedReader br;
		br=new BufferedReader(ir);
		int num,fact=1;
		num=Integer.parseInt(br.readLine());
		while(num>1)
		{
			fact*=num;
			num--;
		}
		System.out.println(fact);
	}
}