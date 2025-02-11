#include<iostream.h>
#include<conio.h>
class student
{
	int roll;
	char name[20];
	int mark;
	public:

	void accept()
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
student s1[5];

clrscr();
for(int i=0;i<5;i++){
s1[i].accept();
s1[i].display();

}
getch();
}