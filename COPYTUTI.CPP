#include<iostream.h>
#include<conio.h>
 class Copy
 {
  int num1,num2,g;
  float n1,n2,p,q;
  public:
	Copy();
	Copy(float,int);
	Copy(int);// we can't able to write int,int because compiler is giving
		// error embiguity (confusing) between Copy(float,int) and Copy(int,int);
		// so i cut one int.
	Copy(float,int,float);
	void display();
	float display1();
	int display2();
	void display3();
 };
 Copy::Copy()
 {
  num1=2;
  num2=3;
 }

 Copy::Copy(float f,int i)
 {
  n1 = f;
  num2 = i;
 }

 Copy::Copy(int sqr)
 {
  num1 = sqr;
 }

 Copy::Copy(float l, int m, float n)
 {
  p = l;
  g = m;
  q = n;
 }

 float Copy::display1()
 {
  return n1*num2;
 }

 int Copy::display2()
 {
  return num1*num1;
 }

 void Copy::display3()
 {
  cout <<"\n\n"<< "Value of float: " << p;
  cout << "\nValue of int: " << g << "\n";
  cout << "Value of float: "<< q;
 }

 void Copy::display()
 {
  cout << "Num1: "<<num1;
  cout << "\nNum2: "<<num2;
 }

 int main()
 {
  float a,b,j,n1,n2;
  int num,c,num1;
  clrscr();
  Copy ob1;
  ob1.display();
  //Copy ob2 = ob1;

  cout << "\nEnter any two number: ";
  cin >> a >> b;
  Copy ob2(a,b);
  j = ob2.display1();
  cout << j<<"\n";

  cout << "\nEnter only one number to get the square of a number: ";
  cin >> num;
  Copy ob3(num);
  c = ob3.display2();
  cout << c <<"\n";

  cout << "\nEnter any three number to display each of the number: ";
  cin >> n1 >> num1 >> n2;
  Copy ob4(n1,num1,n2);
  ob4.display3();

  Copy ob5 = ob4;  // Here what i have assigned to ob4's parameterized constructor
		 // it will initilized to the ob5. what ever the initilization
		 // done in the ob4's constructor.
  ob5.display3();

  // Or we can copy in this way too.
  Copy ob6 = Copy(ob5);
  ob6.display3();
  getch();
  return 0;
 }