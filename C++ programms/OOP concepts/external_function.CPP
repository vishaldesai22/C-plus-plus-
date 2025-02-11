#include<iostream.h>
#include<conio.h>

class A
{         public:
void a1();
void a2();
void a3();

};

void A::a1()
{
cout<<"form out 1\n\n";
}
void A::a2()
{

cout<<"from out 2\n\n";
}




void main()

{        A a;
	clrscr();
	a.a1();
	a.a2();
	getch();
	}