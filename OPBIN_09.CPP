#include<iostream.h>
#include<conio.h>
// This is based on my hands on practice, i have created with a single class
// with 5 object (uses define variable). That can handle 4 operation and also
// returning an object atlast of the operator function.

class Complex
	{
		float x,y;
		public:
			Complex()
				{
					x=0;
					y=0;
				}
			Complex(float a,float b)
				{
					x = a;
					y = b;
				}
			Complex operator * (Complex const &);
			void display(Complex);
	};

Complex Complex :: operator * (Complex const &ob)
	{

		Complex temp;
		temp.x = x * ob.x;
		temp.y = y * ob.y;
		cout << x << "x" << ob.x << "=" << x*ob.x << "\n";
		cout << y << "x" << ob.y << "=" << y*ob.y << "\n";
		return (temp);

	}

void Complex :: display(Complex a1)
	{
		cout << "Value of x: " <<  a1.x << "\nValue of y: " << a1.y << "\n";
	}


int main()
	{
		int n1,n2;
		clrscr();
		cout << "Enter the value for n1 and n2: ";
		cin >> n1 >> n2;
		Complex c1 = Complex(n1,n2);
		c1.display(c1);

		cout << "Enter the value for n1 and n2: ";
		cin >> n1 >> n2;
		Complex c2 = Complex(n1,n2);
		c2.display(c2);

		cout << "Enter the value for n1 and n2: ";
		cin >> n1 >> n2;
		Complex c3 = Complex(n1,n2);
		c3.display(c3);

		cout << "Enter the value for n1 and n2: ";
		cin >> n1 >> n2;
		Complex c4 = Complex(n1,n2);
		c4.display(c4);
		Complex c5;

		cout << "X " << "Y\n";
		c5 = c1*c2*c3*c4;
		cout << "\nC5: \n";
		c5.display(c5);
		getch();
		return 0;

	}


