#include<iostream.h>
#include<conio.h>
class A
{  public:


  A(int a)
  {
  cout<<a;
  }



};
void main()
{
clrscr();
A a(10);
A a1(a);


getch();

}