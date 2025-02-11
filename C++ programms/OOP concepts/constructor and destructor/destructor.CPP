#include<iostream.h>
#include<conio.h>
class A
{
	int *p;
	public:
	test()
	{

	p=new int;
	cout<<"memory allocated  using constructor";
	cout<<"enter no";
	cin>>*p;

	}

	void display()
	  {

	  cout<<"enter a no"<<*p;
	  }

				 ~test()
				 {
				 delete p;
				 cout<<"memory destroyed using destructor"<<endl;

				 }
	};



	void main()
	{
	test t1;
	clrscr();
	t1.display();
	getch();

	}