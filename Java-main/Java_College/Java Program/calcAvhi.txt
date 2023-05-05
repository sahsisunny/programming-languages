import java.util.*;
class Menu
{
double a,b,sum,sub,mul,div;
void sum(double a,double b)
{
sum=a+b;
System.out.println("sum: "+sum);
}
void sub(double a,double b)
{
sub=a-b;
System.out.println("subtract: "+sub);
}
void mul(double a,double b)
{
mul=a*b;
System.out.println("multiply: "+mul);
}
void div(double a, double b)
{
div=a/b;
System.out.println("division: "+div);
}
}
class MainMenu
{
public static void main(String[]args)
{
int ch=0;
double a=0,b=0;
Scanner sc=new Scanner(System.in);
System.out.println(" Main Menu ");
System.out.println("1. sum: ");
System.out.println("2. subtract: ");
System.out.println("3. multiply: ");
System.out.println("4. division: ");
System.out.println("enter your choice: ");
ch=sc.nextInt();
Menu m=new Menu();
if(ch==1||ch==2||ch==3||ch==4)
{
System.out.println("enter first number: ");
a=sc.nextDouble();
System.out.println("enter second number: ");
b=sc.nextDouble();
}
switch(ch)
{
case 1: m.sum(a,b);
break;
case 2: m.sub(a,b);
break;
case 3:m.mul(a,b);
break;
case 4:m.div(a,b);
break;
default: System.out.println("wrong number: ");
}
}
}