class Q8{
	public static void main(String [] args){
		StringBuffer s=new StringBuffer("Sunny");
		String sn="Sunny ";
		String n="Neha";
		s.setLength(3);
		System.out.println(s.charAt(2)+"\t\tcharAt() String Method");	
		System.out.println(s+"\t\tsetLength() String Method");	
		System.out.println(s.append(" Neh")+"\t\tappend() String Method");	
		System.out.println(s.insert(3," Neha")+"\tinsert() String Method");	
		System.out.println(sn.concat(n)+"\tconcat() String Method");	
		System.out.println(s.equals("Sunny")+"\t\tequals() String Method");	
	}
}

//System.out.println();