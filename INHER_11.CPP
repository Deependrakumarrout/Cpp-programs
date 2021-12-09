#include<iostream.h>
#include<conio.h>
class A
	{
	 public:
	   void display()
	   {
	     cout << "\nI am class A";
	   }
	};

class B
	{
	 public:
	   void display()
	   {
	     //A::display();
	     cout << "\nI am class B";
	   }
	};


class C:public A,public B
	{
	 public:
	   void display()
	    {
	      A::display();
	      B::display();
	      cout << "\nI am class C";
	    }
	};

int main()
	{
	  // A obj1;
	  // B obj2;
	  C obj3;
	  //public A;
	  clrscr();
	  obj3.display();
	  getch();
	  return 0;
	}