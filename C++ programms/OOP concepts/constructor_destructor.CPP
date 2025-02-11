#include<iostream.h>
#include<conio.h>
class A
{
A()
{
  cout<<"this is the example of constructor";
}
~A()
{
cout<<"this is the example of destructor";
}

};


void main()
{
clrscr();

A a();
getch();

}
