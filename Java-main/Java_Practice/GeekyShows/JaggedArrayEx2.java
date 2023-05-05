class JaggedArrayEx2{
	public static void main(String args[])
	{
		int num[][]= new int [4][];
				
		int num1[]={1, 2, 3};
		int num2[]={4, 5};
		int num3[]={6};
		int num4[]={7, 8};
		
		num[0]=num1;
		num[1]=num2;
		num[2]=num3;
		num[3]=num4;
		
		for(int i=0;i<num.length;i++)
		{
			for(int j=0;j<num[i].length;j++)
			{
				System.out.print(num[i][j] +" ");
			}
			System.out.println();
		}
	}
}