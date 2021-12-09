#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class Simple
 {
  int mul,sum;
  public:
   Simple()
    {
     mul=0;
     sum=0;
    }
   void align(int);
 };

 void Simple::align(int n)
  {
   cout << "\n\nSL" << setw(15)<< "EVEN" << setw(15) << "SUM\n";
   int div=n/2;
   for(int i=1;i<=div;i++)
    {
     mul=2*i;
     sum=i+mul;
     cout << i <<setw(15) << mul << setw(15)<< sum<<"\n";
    }
  }


int main()
 {
  clrscr();
  int a;
  cout << "Enter a number to see some thing new: ";
  cin >> a;
  Simple obj;
  obj.align(a);
  getch();
  return 0;
 }