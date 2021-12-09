#include<iostream.h>
#include<conio.h>
// Polymorphysim concept implementation using static call of constructor.

class MultiConst
{
  int num1,num2;
  public:
   MultiConst()
   {
    num1=0;
    num2=0;
   }
   MultiConst(int a)
   {
    num1 = a;
    cout << "This is num1: " << num1;
   }
   MultiConst(int n,int m)
   {
    num1=n;
    num2=m;

   }
   void display()
   {
    cout <<"\nNum1: "<<num1;
    cout <<"\nNum2: "<<num2;

   }
};

int main()
{
 MultiConst callConst0;
 int n1=4,n2=5,result=0;
 clrscr();
 cout << "Starting default initilization of n1 and n2 ->\n";
 cout << "n1: "<<n1;
 cout << "\nn2: "<<n2;
 cout << "\n\nThe First one is: ";
 callConst0.display();

 cout << "\n\nThe Second one is: ";
 MultiConst callConst1(34);
 // callConst1.display();

 cout << "\n\nThe Third one is: ";
 MultiConst callConst2 = MultiConst(323,543);
 callConst2.display();
 getch();
 return 0;
}



