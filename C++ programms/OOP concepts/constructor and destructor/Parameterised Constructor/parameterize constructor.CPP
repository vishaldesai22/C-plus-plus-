#include<iostream.h>
#include<conio.h>
class student
{
	int roll;
//char name[20];
	int mark;
	public:

	student(int r1,int m1)
	{
	roll=r1;
       //	name=*n1;
	mark=m1;
	}

	void display()
	{
	cout<<"roll no is "<<roll<<endl;
     //	cout<<"name is "<<name<<endl;
	cout<<"marks are"<<mark<<endl;

	}

};




void main()
{int r,m;
//char *n[10];
cout<<"enter roll and mark"<<endl;
cin>>r>>m;
student s1(r,m);
clrscr();

s1.display();
getch();
}