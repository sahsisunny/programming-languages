class Distance{
	int feet;
	int inch;
	Distance(int f,int i){
		feet=f;
		inch=i;
	}Distance(Distance d){	//Copy Constructor
		feet=d.feet;
		inch=d.inch;
	}
	public void showData(){
		System.out.println("Feet: "+feet );
		System.out.println("Inch: "+inch );
	}
}
class Q10{
	public static void main(String [] args){
		Distance d1=new Distance(5,5);	//First COndition
		Distance d2=d1;					//Second Condition
		Distance d3=new Distance(d1);	//Object CLoining
		d1.showData();
		d2.showData();
		d3.showData();
	}
}