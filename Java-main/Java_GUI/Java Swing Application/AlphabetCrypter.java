import javax.swing.*;
import java.awt.event.*;
import java.util.*;
import java.applet.*;
import java.awt.*;

public class AlphabetCrypter extends JFrame {
	
	JLabel l1,l2,l3;
	JTextField t1,t2;
	JButton b1;
	
	public AlphabetCrypter() { }
	public AlphabetCrypter(String s)
	{ super(s); }
	Font obj=new Font("Times New Roman", Font.BOLD, 20);
	Font obj1=new Font("Times New Roman", Font.PLAIN, 18);
	
	
	public void setComponents()
	{
			
			l1=new JLabel("Enter String");
			l2=new JLabel("Crypted String is :");
			t2=new JTextField("  ");
			t1=new JTextField();
			l3=new JLabel("Created by :-  Sunny(07-A) and Abhishek(01-S)");
			
			b1=new JButton("Crypt");
			
			setLayout(null);
			l1.setFont(obj);
			l2.setFont(obj);
			t2.setFont(obj);
			t1.setFont(obj);
			b1.setFont(obj);
			l3.setFont(obj1);
			
			l1.setBounds(80,50,200,40);
			t1.setBounds(250,50,200,40);
			l2.setBounds(80,100,200,40);
			t2.setBounds(250,100,200,40);
			b1.setBounds(200,180,100,40);
			l3.setBounds(20,250,400,30);
			
			b1.addActionListener(new Handler());
			add(l1);
			add(t1);
			add(l2);
			add(t2);
			add(b1);
			add(l3);
		}
		class Handler implements ActionListener
		{
			public void actionPerformed(ActionEvent e){
				int i;
				String s,s1;  //correction no.1
				s=t1.getText();
				char []ch=s.toCharArray();// string changed into char array 
				for(i=0;i<ch.length;i++)
				{
					if(ch[i]=='A')ch[i]='Z';else
					if(ch[i]=='B')ch[i]='Y';else
					if(ch[i]=='C')ch[i]='X';else
					if(ch[i]=='D')ch[i]='W';else
					if(ch[i]=='E')ch[i]='V';else
					if(ch[i]=='F')ch[i]='U';else
					if(ch[i]=='G')ch[i]='T';else
					if(ch[i]=='H')ch[i]='S';else
					if(ch[i]=='I')ch[i]='R';else
					if(ch[i]=='J')ch[i]='Q';else
					if(ch[i]=='K')ch[i]='P';else
					if(ch[i]=='L')ch[i]='O';else
					if(ch[i]=='M')ch[i]='N';else
					if(ch[i]=='N')ch[i]='M';else
					if(ch[i]=='O')ch[i]='L';else
					if(ch[i]=='P')ch[i]='K';else
					if(ch[i]=='Q')ch[i]='J';else
					if(ch[i]=='R')ch[i]='I';else
					if(ch[i]=='S')ch[i]='H';else
					if(ch[i]=='T')ch[i]='G';else
					if(ch[i]=='U')ch[i]='F';else
					if(ch[i]=='V')ch[i]='E';else
					if(ch[i]=='W')ch[i]='D';else
					if(ch[i]=='X')ch[i]='C';else
					if(ch[i]=='Y')ch[i]='B';else
					if(ch[i]=='Z')ch[i]='A';else
					if(ch[i]=='a')ch[i]='z';else
					if(ch[i]=='b')ch[i]='y';else
					if(ch[i]=='c')ch[i]='x';else
					if(ch[i]=='d')ch[i]='w';else
					if(ch[i]=='e')ch[i]='v';else
					if(ch[i]=='f')ch[i]='u';else
					if(ch[i]=='g')ch[i]='t';else
					if(ch[i]=='h')ch[i]='s';else
					if(ch[i]=='i')ch[i]='r';else
					if(ch[i]=='j')ch[i]='q';else
					if(ch[i]=='k')ch[i]='p';else
					if(ch[i]=='l')ch[i]='o';else
					if(ch[i]=='m')ch[i]='n';else
					if(ch[i]=='n')ch[i]='m';else
					if(ch[i]=='o')ch[i]='l';else
					if(ch[i]=='p')ch[i]='k';else
					if(ch[i]=='q')ch[i]='j';else
					if(ch[i]=='r')ch[i]='i';else
					if(ch[i]=='s')ch[i]='h';else
					if(ch[i]=='t')ch[i]='g';else
					if(ch[i]=='u')ch[i]='f';else
					if(ch[i]=='v')ch[i]='e';else
					if(ch[i]=='w')ch[i]='d';else
					if(ch[i]=='x')ch[i]='c';else
					if(ch[i]=='y')ch[i]='b';else
					if(ch[i]=='z')ch[i]='a';
				}
				s1=String.valueOf(ch);  //correction no.2(char array changed into string)
				t2.setText(s1); //correction no.3
			}
		}
	public static void main(String[] args){
		AlphabetCrypter jf = new AlphabetCrypter("Alphabet Crypter ");
		jf.setComponents();
		
		jf.setSize(500,400);
		jf.setVisible(true);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}