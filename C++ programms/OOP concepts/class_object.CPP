	  //parameterised function


#include<conio.h>
#include<iostream.h>
class A
{public:
void a1(int a,int b)
{
cout<< a<<" "<<b;

}


};
void main()
{       clrscr();
A a;
int n1,n2;
cout<<"enter a number";
cin>>n1;
cout<<"enter second number";
cin>>n2;
a.a1(n1,n2);

getch();
}