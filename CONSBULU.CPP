#include<iostream.h>
#include<conio.h>
class Bulu
{
 int m,n;
 public:
  Bulu();
  Bulu(int,int);
  void display();
};

Bulu::Bulu()
{
 m=5;
 n=7;
}

void Bulu::display()
{
  cout << "\nNum1: "<<m;
  cout << "\nNum2: "<<n;
}

Bulu::Bulu(int x,int y)
{
 m = x;
 n = y;
}

int main()
{
 int num1,num2;
 clrscr();
 cout << "Enter any two number: ";
 cin >> num1 >> num2;
 Bulu ob1(num1,num2);
 ob1.display();
 Bulu ob4;
 cout << "\nThis is default constuctor: ";
 cout << "\nThe value is already been initilized: ";
 ob4.display();

 cout << "\nEnter any two number: again: ";
 cin >> num1 >> num2;
 // Here we can't able to make the same have of the first object that is ob1.
 //
 Bulu ob2(num1,num2);
 ob2.display();
 getch();
 return 0;

}


