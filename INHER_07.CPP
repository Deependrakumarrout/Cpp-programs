#include<iostream.h>
#include<conio.h>
// Multiple inheritance with dynamic initilization created by me.
class Parent
	{
	  protected:
		int a;
	  public:
		void assignA(int);
	};

void Parent::assignA(int x)
	{
	  a = x;
	}


class Parent1
	{
	  protected:
		int b;
	  public:
		void display(int);

	};

void Parent1::display(int y)
	{
	  b = y;
	}


class Child:public Parent,public Parent1
	{
	  protected:
		int result;
	  public:
		void operation();
	};

 void Child::operation()
	{
		cout << "\nValue of a: " << a;
		cout << "\nValue of b: " << b;
		result = a * b;
		cout << "\nThe Multiplication of " << a << " and " << b <<" is: " << result;
	}


int main()
	{
	  int n1,n2;
	  Child obj;
	  clrscr();
	  cout << "Enter two numbers: ";
	  cin >> n1 >> n2;
	  obj.assignA(n1);
	  obj.display(n2);
	  obj.operation();
	  getch();
	  return 0;
	}