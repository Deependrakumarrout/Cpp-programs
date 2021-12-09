#include<iostream.h>
#include<conio.h>
class B
	{
		int a;
		public:
			int b;
			void get_ab();
			int get_a();
			void show_a();
	};

class D : public B
	{
		int c;
		public:
			void mul();
			void display();
	};

void B::get_ab()
	{
		a = 5;
		b = 10;
	}

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
		c = b * get_a();
	}

void D::display()
	{
		cout << "a = " << get_a() << "\n";
		cout << "b = " << b << "\n";
		cout << "c = " << c << "\n";
	}

int main()
	{
		D obj1;
		clrscr();
		obj1.get_ab();
		obj1.mul();
		obj1.show_a();
		obj1.display();
		obj1.b = 20;
		obj1.mul();
		obj1.display();
		getch();
		return 0;

	}