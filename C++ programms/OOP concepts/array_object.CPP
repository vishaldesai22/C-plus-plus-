#include<iostream.h>
#include<conio.h>

class A
{
public:
int a;
void a1()
{
cout<<"enter a number ";
cin>>a;
}
void a2()
{
cout<<"value of A is "<<a;

}

};

void main()
{
clrscr();
for(int i=0;i<2;i++)
{A z;
z.a1();
z.a2();
getch();

}

}