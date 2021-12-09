#include<iostream.h>
#include<conio.h>
// Based on my concept by dynamic initilizaion of parameterized constructor.
class Dynamic
{
 int num1,num2;
 public:
  Dynamic();
  Dynamic(int);
  Dynamic(int,int);
  void display1();
  void display2();
};

Dynamic::Dynamic()
{
 num1=0;
 num2=0;
}

Dynamic::Dynamic(int n1)
{
 num1=n1;
}

Dynamic::Dynamic(int a1,int a2)
{
 num1=a1;
 num2=a2;
}

void Dynamic::display1()
{
 cout<< "\nThe num1: " << num1;
}

void Dynamic::display2()
{
 cout << "\nThe num1 value: " << num1;
 cout << "\nThe num2 value: " << num2;
}

int main()
{
int m1,m2;
clrscr();
cout << "Default constructor call: \n";
Dynamic ob1;
ob1.display2();

cout << "\n1st parameterized constructor call: \n";
cin >> m1;
Dynamic ob2(m1);
ob2.display1();

cout << "\n2nd parameterized constructor call: \n";
cout << "Enter two number: ";
cin >> m1 >> m2;
Dynamic ob3(m1,m2);
ob3.display2();
getch();
return 0;
}


