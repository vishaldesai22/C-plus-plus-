#include<iostream.h>
#include<conio.h>
int fact(int n)
{
	if(n==0)
	{
	return 1;
	}
	else
	{
	return n*fact(n-1);
	}

}
void main()
{
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	cout<<"factorial of number is"<<fact(n);
	getch();

}