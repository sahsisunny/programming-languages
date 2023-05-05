import java.util.*;
public class Clock extends Thread
{
	public Thread th;
	public Date tm;
	public GregorianCalendar c;
	public int hh,mm,ss,mmm;
	public String st;
	public Clock()
	{		
		//if(th==null) 
		th = new Thread(this);
		tm = new Date();
		c  = new GregorianCalendar();
		c.setTime(tm);
		mmm = c.get(Calendar.MINUTE);
		System.out.println("My Thread Program Clock Starts");
		th.start(); 
	}	
	public void getTime(){
		tm = new Date();
		c  = new GregorianCalendar();
		c.setTime(tm);
		hh = c.get(Calendar.HOUR);
		mm = c.get(Calendar.MINUTE);
		ss = c.get(Calendar.SECOND);
		st = hh+":"+mm+":"+ss;		
		System.out.println(st);
	}
	public void run()
	{	//method of Thread class overriden
		while(th!=null)
		{
			try
			{
				getTime();
				if((mmm+1) == mm)
					th=null;
				else
					th.sleep(1000);
			}
			catch(InterruptedException e)
			{
			}
		}
	}		
	public static void main(String args[])
	{
		Clock cl = new Clock();
		System.out.println("My Thread Program Clock Ends");
	}
}