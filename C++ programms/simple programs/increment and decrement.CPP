#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a=10;
int b;
     //increment
b=++a;
cout<<"value in preincrement"<<b<<endl;

b=a++;
cout<<"value in postincrement"<<b<<endl;

//decrement
b=--a;
cout<<"value in predecrement"<<b<<endl;

b=a--;
cout<<"value in postdecrement"<<b<<endl;




getch();

}