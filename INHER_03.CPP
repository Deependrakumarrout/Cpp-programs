#include<iostream.h>
#include<conio.h>
class B
	{
	  protected:
	   int a;
	   public:
	    int b;
	    void get_ab();
	    int get_a(void);
	    void show_a(void);
	};


class D:public B
	{
	  protected:
	  int c;
	  public:
	    void mul(void);
	    void display(void);
	};
/*
void B::get_ab()
	{
	  a = 5;
	  b = 10;
	}
*/

int B::get_a()
	{
	  return a;
	}

void B::show_a()
	{
	  cout << "a = " << a << "\n";
	}

void D::mul()
	{
	  B b;
	  get_ab();
	  c = get_a();
	}

void D::display()
	{
	  cout << "a = " << get_a() << "\n";
	  cout << "b = " << b << "\n";
	  cout << "c =  " << c << "\n";
	}

int main()
	{
	  D obj1;
	  clrscr();
	  //obj1.get_ab();
	  obj1.mul();
	  obj1.show_a();
	  obj1.display();
	  obj1.b = 20;
	  obj1.mul();
	  obj1.display();
	  getch();
	  return 0;
	}

void B::get_ab(void)
	{
	  cout <<"\nEnter value for a and b: ";
	  cin >> a >> b;

	}