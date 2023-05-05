public class InitializationBlock {
	private int x;
	{
		System.out.println("Initialization Block:x= "+x);
		x=5;
	}
public InitializationBlock() {
	System.out.println("Constructor:x= "+x);
}
	public static void main(String[] args) {
		InitializationBlock t1= new InitializationBlock();
		InitializationBlock t2= new InitializationBlock();
	}
}