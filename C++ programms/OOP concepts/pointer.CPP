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
A z;
A *ptr=&z;
ptr->a1();
(*ptr).a2();
getch();



}