#include<iostream.h>
#include<conio.h>
class a
{public:
void a1()
{cout<<"hello";
}

}             ;

  class B:public a
  {public:
  void b1()
  {
  cout<<"hi";
  }
  }          ;


void main()
{                  clrscr();
		  B b2;
		  b2.a1();
		  b2.b1();
		  getch();


		  }