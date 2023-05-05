class LabeledBreakStat{
	public static void main(String args[])
	{
		Labeled:
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(i==3)
				{
					break Labeled;
				}
				System.out.print("* ");
			}
		System.out.println();
		}
	}
}