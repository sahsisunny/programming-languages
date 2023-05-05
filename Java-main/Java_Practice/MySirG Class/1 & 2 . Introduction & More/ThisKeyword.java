class Bol
{
	private int l,b,h;
	public void setDimension(int l,int b, int h)	//Instance member function
	{ this.l=l; this.b=b; this.h=h; }	//b1= this (used for represent caller object)
	public void sendBox()
	{
		GiftTaker gf = GiftTaker
		gf.acceptGift(this);
	}
}
class ThisKebword
{
	public static void main(String [] args)		//Static member function
	{
		Bpl b1= new Bol();
		b1.setDimension(12,10,5);
		b1.sendBox();
	}
}