#include<iostream.h>
#include<conio.h>

// Creating a program with my logic that can be call using child object.
class Parent
	{
	  private:
		int pro;  // private member variable.
	  public:
		int noob;
		// default constructor.
		Parent()
		  {
		    pro = 7;
		  }

		// Parent's member function.
		int callPro()
			{
			  return pro;
			}

		// Parent's member function
		void displayPro()
			{
			  cout << "\nValue of pro: " << pro;
			}
	     };

// Parent class inherited to child class.
class Child : public Parent
	{
	  private:
		int a;
	  public:
		int b;
		// default constructor
		Child()
			{
			  a = 4;
			}

		// member function
		void mul()
			{
			  noob = a * callPro();
			}

		void display()
			{
			  cout << "\nValue of a: " << a;
			  cout << "\nValue of pro: " << callPro();
			  cout << "\nValue of noob: " << noob;
			}
	};

int main()
	{

	  clrscr();
	  Child obj; // called with child's class object.
	  obj.displayPro();
	  obj.mul();
	  obj.display();
	  obj.b = obj.callPro();
	  cout << "\nValue of callPro: " << obj.b;
	  getch();
	  return 0;
	}