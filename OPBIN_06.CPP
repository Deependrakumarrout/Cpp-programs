#include<iostream.h>
#include<conio.h>
class Complex
		{
		  float x,y;
		  public:
			Complex() {}  // default consturctor
			// parameterized constructor
			Complex(float real, float imag)
				{
				  x = real;
				  y = imag;
				}
			Complex operator +(Complex);
			void display(void);
		};

Complex Complex::operator +(Complex c)
		{
		  Complex temp; //temporary object created.
		  temp.x = x + c.x;
		  temp.y = y + c.y;
		  return (temp);
		}

void Complex::display()
		{
		  cout << x << "+" << y << "\n";
		}

int main()
		{
		  // Complex c1(2,3),c2(1,2),c3(1,3); // we can write like this too
		  // Or we can write like this as well.
		  // Complex c1(2.5,3.5);
		  // Complex c2(1.6,2.7);
		  // Complex c3(1.6,2.8);
		  Complex c1,c2,c3;
		  clrscr();
		  c1 = Complex(2.5,3.5);
		  c2 = Complex(1.6,2.7);
		  c3 = Complex(1.6,2.8);
		  cout << "The value of x and y with c3 object before changing by operator overloading: ";
		  c3.display();
		  c3 = c1 + c2; // invokes operator function or called to operator function.
		  cout << "C1=";
		  c1.display();
		  cout << "C2=";
		  c2.display();
		  cout << "C3=";
		  c3.display();
		  getch();
		  return 0;
		}