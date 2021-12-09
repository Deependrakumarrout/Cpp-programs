#include<iostream.h>
#include<conio.h>
class Addition
{
 int n1,n2,n3;
 public:
   int sum(int a,int b)
   {
    return a+b;
   }
   int sum(int a,int b,int c)
   {
    return a+b+c;
   }
};

int main()
{
 int num1,num2,num3;
 Addition ob1;
 clrscr();
 cout << "Enter two number to perform addition: ";
 cin >> num1 >>num2;
 cout << "The sum of two numbers: " << num1 << " and " << num2 << " is: " <<ob1.sum(num1,num2);
 cout << "\n\nEnter for three number now to perform addition: ";
 cin >> num1 >> num2 >> num3;
 cout <<"The sum of three numbers: " << num1 << "," << num2 << " and " <<num3 << " is: "<<ob1.sum(num1,num2,num3);
 getch();
 return 0;

}