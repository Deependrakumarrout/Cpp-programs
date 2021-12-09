#include<iostream.h>
#include<conio.h>

// This program is based on my thinking what i want to do i am performing.
// Declaring two classes.
// And performing sum operation on both the object.
// Here i am using binary operator to sum both the object.

 int c;
 class Sum1
 {
  public:
    int num1;
    // parameterized constructor
    Sum1(int);
    // display function
    void display(int,int);
 }
 // definition of parameterized constructor
 Sum1::Sum1(int a)
  {
   num1 = a;
  }

  // Another class definition
  class Sum2
  {
   int num2;
   public:
     // prameterized constructor
     Sum2(int);

     // plus operator prototype
     void operator +(Sum1);
  }
  // definition of class 2's constructor
  Sum2::Sum2(int b)
  {
   num2 = b;
  }
   // plus operator function definition OR Overloading plus operator function
  void Sum2 ::operator + (Sum1 a)
  {
    c = num2+a.num1;
  }

  // display function definition
  void Sum1 :: display(int a,int b)
  {
   cout << "The Sum of " << a <<" and " << b << " is: ";
   cout << c;
  }

  // main function
  int main()
  {
    int a,b;
    clrscr();
    cout << "Enter the first number to add: ";
    cin >> a;
    Sum1 n1(a);
    cout << "Enter the second number to add: ";
    cin >> b;
    Sum2 n2(b);
    // automatically call of operator function
    n2+n1; // dout -> here n1 is conveting into the n2 type conversion.
	  // but why can't we write like n1 + n2;
    n1.display(a,b);
    getch();
    return 0;
  }