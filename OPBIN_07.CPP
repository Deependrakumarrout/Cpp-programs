#include<iostream.h>
#include<conio.h>

// Constructed by me.
// Operation based on binary conversion class to class.
// Operation on mulitplication.
class Operate
	{
		public:
			float n1,n2,n3;
			// default constructor.
			Operate(){}
			// parameterized constructor.
			Operate(float,float,float);
			// plus operator function.
			Operate operator +(Operate);
			void display(void);
	};

	// plus operator function definition of class Operator.
Operate Operate :: operator + (Operate obj1)
	{
	 Operate jo;
	 jo.n1 = n1 + obj1.n1;
	 jo.n2 = n2 + obj1.n2;
	 jo.n3 = n3 + obj1.n3;
	 return jo;
	}

	 // parameterized constructor definition.
Operate::Operate(float a,float b,float c)
	{
		n1 = a;
		n2 = b;
		n3 = c;
	}
	// display function definition.
void Operate::display()
	{
	  cout << "Operation of class 1: \n";
	  cout << n1 <<" + " << n2 << " + " << n3 << "\n";
	  cout << "The Total sum is: " << n1 + n2 + n3;
	}


     // Another class declaration:
class Operate1
	{       // private variable.
		float a1,a2,a3;
		public:
			// default constructor.
			Operate1() {};
			// parameterized constructor.
			Operate1(float,float,float);
			// Here is two puls operator function.
			// 1: for Overloading the class to class type conversion.
			// 2: for Overloadint the class to basic type conversion.
			Operate1 operator + (Operate);
			Operate1 operator + (Operate1);
			// display function prototype.
			void display();
	};

	  // parameterized constructor definition.
Operate1::Operate1(float x,float y,float z)
	{
		a1 = x;
		a2 = y;
		a3 = z;
	}

	   // Operator overloading definition for class to class type.
Operate1 Operate1 :: operator + (Operate ob)
	{
		Operate1 temp;
		temp.a1 = a1 + ob.n1;
		temp.a2 = a2 + ob.n2;
		temp.a3 = a3 + ob.n3;
		return (temp);
	}

	// Operator overloading definition for class to basic type conversion.
Operate1 Operate1 :: operator + (Operate1 ob1)
	{
		Operate1 tp;
		tp.a1 = a1 + ob1.a1;
		tp.a2 = a2 + ob1.a2;
		tp.a3 = a3 + ob1.a3;
		return tp;
	}

	// display function definition.
void Operate1::display()
	{
	   cout << "\n\nOperation of class 2: \n";
	   cout <<"\n  a1:      a2:	a3:";
	   cout << "\n  " << a1 << "  +  "<<  "\t " << a2 << " + " << "\t "<<a3;
	   cout << "The Total sum is: " << a1+a2+a3;
	   //cout << "\n" << a1 << " + "<< a2 << " + " << a3;
	}

// main function.
int main()
	{
		float arr[8],arr1[8];
		clrscr();
		cout << "\nFor class 1: ";
		cout << "\nEnter the price for 6 items: ";
		for(int i=0;i<6;i++)
			{
				cout << "\nPrice of item number: " << i+1 << " -> ";
				cin >> arr[i];
			}
		Operate c1[3];
		c1[0] = Operate(arr[0],arr[1],arr[2]);
		c1[1] = Operate(arr[3],arr[4],arr[5]);
		Operate a1;


		cout << "\n\nFor class 2: ";
		cout << "\nEnter the price for 6 items: ";
		for(int j=0;j<6;j++)
			{
				cout << "\nPrice of item number: " << j+1 << " -> ";
				cin >> arr1[j];
			}

		Operate1 c2[3];
		c2[0] = Operate1(arr1[0],arr1[1],arr1[2]);
		c2[1] = Operate1(arr1[3],arr1[4],arr1[5]);
		Operate1 b1,c3;

		//c1[3] = Operator1(arr[9],arr[10],arr[11]);
		a1 = c1[0] + c1[1];
		a1.display();
		b1 = c2[0] + c2[1];
		b1.display();
		c3 = b1 + a1;
		c3.display();
		getch();
		return 0;
	}