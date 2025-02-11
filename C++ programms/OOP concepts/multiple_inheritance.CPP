#include<conio.h>
#include<iostream.h>

class A
{ public:
int c;
void a1(int a,int b)
{
 c=a+b;



}


};
class B
{
public:
int e;
void b1(int c,int d)
{
e = c*d;

}
};

class C :public A,public B
{
public:

void display()
{
cout<<"multiplication of numbers is :"<<e;
cout<<"addition is "<<c;
}
};





void main()
{ clrscr();
  C c1;
  c1.a1(10,20);
  c1.b1(10,20);
  c1.display();
getch();
}