#include<iostream.h>
#include<conio.h>
class A
{  public:
int x,y;

void accept()
{
cout<<"enter a number"<<endl;
cin>>x>>y;


}
};

class B:public A
{   public:
int s;

void display()
{ s=x+y;
cout<<"addtion is ::"<<s;
}
};                               ;
void main()
{
clrscr();
B b1;
b1.accept();
b1.display();
getch();

}