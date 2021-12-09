#include<iostream.h>
#include<conio.h>
class Parent1
	{
	 public:
	  void display()
		{
		  cout << "\nI am Super base class.";
		}
	};

class Child1:public Parent1
	{
	 public:
	   void display();

	};

	   void Child1::display()
		{

		  Parent1::display();
		  cout << "\nI am intermideate child class.";
		}


class Child2:public Child1
	{
	 public:
	   void display()
		{
		  Child1::display();
		  cout << "\nI am Derive class.";
		}
	};

class Child3:public Child2
	{
	  public:
	    void display()
		{
		  Child2::display();
		  cout << "\nI am in Child class.";
		}
	};


int main()
	{
	  Child3 obj;
	  clrscr();
	  //Parent1::display();
	  obj.display();
	  getch();
	  return 0;
	}