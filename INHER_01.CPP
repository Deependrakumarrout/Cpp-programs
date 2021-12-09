#include<iostream.h>
#include<conio.h>
class Base
	{
	  public:
		int n1,n2;
		Base()
		{

		}
		Base(int a1,int a2)
			{
			  n1 = a1;
			  n2 = a2;
			}
		void display()
			{
			  cout << "\nThe multiplication of :"<< n1 << " * " << n2 << " = " << n1*n2;
			  cout << "\nYou are in parent class";
			}
	};


class Derive : public Base
	{
	  public:
		int b;

		Derive(int a)
			{
			 b = a;

			}

		void display(Base &ob)
			{
			  // Base obj;
			  // obj.display();
			  // Do this later.
			  //cout << "First value printed in derive class: " << n1;
			  //cout << "\nSecond value printed in derive class: " << n2;
			  //cout << "\nThe multiplecation of :"<< ob.n1 << " * " << ob.n2 << " = " << ob.n1*ob.n2;
			  ob.display();
			  cout << "\nThe square of "<< b << " is: " << b*b;
			  cout << "\nYou are in child class";


			}
	};


int main()
	{
	  int a,b,c;
	  clrscr();
	  cout << "\nStarting point (main)\n";
	  cout << "Enter two numbers: ";
	  cin >> a >> b;
	  Base ob1(a,b);

	  cout << "\nEnter a number to get square: " ;
	  cin >> c ;
	  Derive ob2(c);
	  ob2.display(ob1);

	  //cout <<"\nAddress of ob2: "<< &ob2;
	  //cout <<"\nob1 hold the address of ob2: " << ob1 <<"\n";
	  //cout <<ob1;
	  //cout <<"\nAddress of ob1: " << &ob1;
	  //ob1->display();
	  //ob2->display();
	  //ob1 -> display();
	  cout << "\nEnding point (main)";
	  getch();
	  return 0;
	}
