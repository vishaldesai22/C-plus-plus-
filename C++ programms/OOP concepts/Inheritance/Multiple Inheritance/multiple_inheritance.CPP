#include<iostream.h>
#include<conio.h>
class A
{  public:
char x[20];

void accept()
{
cout<<"enter your name"<<endl;
cin>>x;


}
};

class B:public A
{   public:
char s[20];

void accept1()
{
cout<<"enter sarname::";
cin>>s;
}
};
class c:public B
{   public:


void display()
{
cout<<"name is:"<<x<<s;

}
};

			    ;
void main()
{
clrscr();
c b1;
b1.accept();
b1.accept1();
b1.display();
getch();

}