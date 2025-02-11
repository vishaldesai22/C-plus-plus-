#include<iostream.h>
#include<conio.h>



void main()
{
clrscr();

	int a=20;
//	cout<<"the value of a is "<<a<<endl;
  //	cout<<"memory addaress is"<<&a<<endl;
    //	cout<<"	the value of a is::"<<*(&a);
      int *p;
      *p=a;
      cout<<"the value of a is ::"<<*p<<endl;
      *p=*p+10;
      cout<<*p;




getch();
}