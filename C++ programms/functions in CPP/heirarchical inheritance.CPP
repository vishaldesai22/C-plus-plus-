#include<iostream.h>
#include<conio.h>
class A
{      public :
void a1()
{
  cout<<"from A";
}
};
class B : public A{
public:
void b1()
{
cout<<"from B";
}
};



class C : public A
{public:
void c1()
{        cout<<"from C";

}
};

void main()
{       clrscr();
C c2;
c2.a1();
c2.c1();

B b;
b.b1();
b.a1();




getch();
}