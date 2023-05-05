import java.util.*;
class Q15
{
	public static void main(String[]args)
	{
		Scanner sc = new Scanner(System.in);
		Q15PacClass a1 = new Q15PacClass();
		System.out.print("enter your message...: ");
		String s1 = new String(sc.nextLine());
		a1.show_data(s1);
	}
}