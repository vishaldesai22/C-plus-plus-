#include<iostream.h>
#include<conio.h>
class A
{       public:
	   char name[20];
void input(){
		cout<<"enter a name ";
		cin>>name;   }


void display()
{
	cout<<"name is "<<name<<endl;
}
};

class B:public A
{    public:
	    int roll;
	void input1()
{
	cout<<"enter a roll number";
	cin>>roll;
}
void display2()
{
	cout<<"roll number is  "<<roll<<endl;
}
}   ;


void main()
{
clrscr();
B b1;
b1.input();
b1.display();
b1.input1();
b1.display2();
getch();
}