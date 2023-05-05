class StaMetCannotUseStaVar{
	int a=10;			//Instance Variable
	static int y=30;	//Static Variable
	public static void main(String args[])
	{
		int x=20;		//Local Variable
		System.out.println("Local Variable: "+x);
		System.out.println("Static Variable: "+y);
		System.out.println("Instance Variable: Cannot use in Static Method");
		/*
		System.out.println("Instance Variable: "+a);
		It is cannot use to use Instance variable in static method
		*/
	}
}