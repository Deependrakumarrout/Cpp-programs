 #include<iostream.h>
 #include<conio.h>
 // This is in Day 29 in the notebook.
 // This is based on tution program  a bit modified by me.
 class Complex
	{
		float x,y;
		public:
			Complex(){};
			Complex(float,float);
			Complex operator *(Complex);
		      //void display(Complex);  For the trial i used to write
			void display();       //void display(); to see what
					// will be the output but the output
					// is same.
	};

 Complex :: Complex(float a,float b)
	{
		x = a;
		y = b;
	}

 Complex Complex :: operator *(Complex obj)
	{
		obj.x = x * obj.x;    // Here because of obj we can able to
		obj.y = y * obj.y;    // get the recent updated value of
		return (obj);	      // multiplication which hold through
		// the obj (object) and also return the value to x and y varible.
		// So it is important to write the obj.x and obj.y to be
		// return through the obj that hold two values.
		// [Because now the object will be holding two values
		// i.e of multiplication operation of x and y].
		// If we write x and y instead of obj.x and obj.y then
		// the x and y variable will hold only the previous value that
		// is message passing though the n2 object.

		/*
		For Ex:
		x = x * obj.x;
		y = y * obj.y;
		return (obj);
		This will not make any sence of returning obj object which
		does not hold anything and it usually print the n2 values
		in the n3 object while calling to display() fun's.

		*/
	}

 void Complex :: display()
	{
		cout << "x: " << x;
		cout << "\ny: " << y << "\n\n";
	}

 int main()
	{
		float x,y;
		clrscr();
		cout << "Enter two number for c1: ";
		cin >> x >> y;
		Complex n1 = Complex(x,y);   // Explicit call.
		cout << "C1: \n";
		n1.display();
		cout << "Enter two number for c2: ";
		cin >> x >> y;
		Complex n2 = Complex(x,y);
		cout << "C2: \n";
		n2.display();
		Complex n3 = Complex(x,y);
		n3 = n1 * n2;
		cout << "C3: \n";
		n3.display();
		getch();
		return 0;
	}


