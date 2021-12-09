 #include<iostream.h>
 #include<conio.h>
 // This program is not based on tution one edited by me.
 class Complex
	{
		float x,y,r1,r2;
		//float y,z;
		//int x,a;
		public:
			Complex(float, float);
			//Complex(float,int);
			void operator *(Complex);
			void display(Complex);
			void display1(Complex);
			void display2();
	};

	Complex::Complex(float a, float b)
		{
			x = a;
			y = b;
		}

	/*
	Complex::Complex(float p, int q)
		{
		   z = p;
		   a = q;
		}
	*/

	void Complex::operator *(Complex w)
		{
		       //	cout << "Value of x "<< x;
		       //	cout << "\nValue of y "<< y;
			//cout << "\nValue of z " << z;
			//cout << "\nValue of a " << a;
			cout << "\nOperation started\n";
			r1  = x * w.x;
			r2  = y * w.y;
		}




	void Complex::display(Complex ob)
		{
			cout << "x: " << x << " * " << ob.x << " = " << r1 << "\n";
		}

	void Complex::display1(Complex ob1)
		{
			cout << "y: " << y << " * " << ob1.y << " = " << r2 << "\n";
		}
	void Complex::display2()
		{
		  float n = r1*r2;
		  cout << "\nThe result is:" << n;
		}

			int main()
		{
			Complex c1 = Complex(4,2);
			Complex c2 = Complex(5,3);
			// Complex c3 = Complex (12.3,34.5);
			clrscr();
			c1*c2; // called to operator function
			cout << "c1 = \n";
			c1.display(c2);
			c1*c2;
			cout << "c2 = \n";
			c1.display1(c2);
			cout << "c1 * c2 = ";
			c1.display2();
			getch();
			return 0;
		}
