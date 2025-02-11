#include<iostream.h>
#include<conio.h>
class student
{       public:
	int roll;
	char name[20];
	int mark;
	void accept();
	void display();
	};

	inline void student::accept()
	{
	cout<<"enter rollno, name ,mark";
	cin>>roll>>name>>mark;
	}

       inline void student::display()
	{
	cout<<"roll no is "<<roll<<endl;
	cout<<"name is "<<name<<endl;
	cout<<"marks are"<<mark<<endl;

	}






void main()
{
student s1;
clrscr();
s1.accept();
s1.display();
getch();
}