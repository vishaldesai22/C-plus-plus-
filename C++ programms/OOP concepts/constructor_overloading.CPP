
// this the example of constructor overloading

#include<conio.h>
#include<iostream.h>
class A
{               public:
  A()
  {

  cout<<"hello"<<endl;

  }

A(int b)
  {
  cout<<b;
  }
  A(int q,int w)
  {
  cout<<q<<w;
  }


};





void main()
{       clrscr();

A a1();
A a2(10);

A a3(20,30);
getch();
}