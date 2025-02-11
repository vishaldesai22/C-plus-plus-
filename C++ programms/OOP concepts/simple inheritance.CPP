#include<iostream.h>
#include<conio.h>

class A
{                   public:
int a,b;
int a1()
{

cout<<"enter numbers for addition\n\n";
cin>>a>>b;
int c=a+b;
return c;

}


}   ;
class B :public A
{                   public:
int d,c;
int b1()
{

cout<<"\nenter numbers for multiplication\n\n";
cin>>c>>d;
int v=c*d;
return v;

}


}   ;

void main()
{      clrscr();
	 B b;
	 cout<<b.a1();
	 cout<<b.b1();
getch();

}