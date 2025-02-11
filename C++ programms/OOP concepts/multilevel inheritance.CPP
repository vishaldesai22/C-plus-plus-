#include<iostream.h>
#include<conio.h>
class A
{                  public:
void a1()
{
cout<<"1st class \n";
}

};

class B:public A
{           public:
void b1()
{
cout<<"2nd class \n";

}

};

class C:public B
{    public:
void c1()
{
cout<<"3rd class \n";

}
};


void main()
{
clrscr();


C c;
c.a1();
c.b1();
c.c1();
getch();

}