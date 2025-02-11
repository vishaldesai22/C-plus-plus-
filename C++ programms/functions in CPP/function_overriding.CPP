#include<iostream.h>
#include<conio.h>

class A
{ public:
void add()=0;
{
int a=10;
int b=20;
int c;
c=a+b;
cout<<"addition of two number is::"<<c<<endl;
}
};
class B :public A
{
 public:
void add()
{
int q=30;
int w=20;
int r;
r=q+w;
cout<<"addition of number from 2nd is "<<r;

}
};


void main()
{clrscr();

B b1;
b1.add();

getch();
}
