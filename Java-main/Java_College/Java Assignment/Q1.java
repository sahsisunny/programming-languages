class Q1{
	public static void main(String [] args){
		if(args.length==2){
			int a=Integer.parseInt(args[0]);
			int b=Integer.parseInt(args[1]);
			int Sum=a+b;
			System.out.println("Sum of "+a+" and "+b+" is "+Sum);
		}
		else{
			System.out.println("Wrong Input");
		}
	}
}