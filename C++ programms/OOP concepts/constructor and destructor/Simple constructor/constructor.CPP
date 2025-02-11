#include<iostream.h>
#include<conio.h>
class student
{
	int roll;
	char name[20];
	int mark;
	public:

	student()
	{
	cout<<"enter rollno, name ,mark";
	cin>>roll>>name>>mark;
	}

	void display()
	{
	cout<<"roll no is "<<roll<<endl;
	cout<<"name is "<<name<<endl;
	cout<<"marks are"<<mark<<endl;

	}

};




void main()
{
student s1;
clrscr();

s1.display();
getch();
}