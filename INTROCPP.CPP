#include<iostream.h>
#include<conio.h>
class addition
 {
  int num1,num2,result;
  public:
   int sum(int,int);
 };

 int addition:: sum(int n1,int n2)
 {
  result = n1+n2;
  return result;
 }
 int main()
 {
  int a,b,c;
  clrscr();
  cout << "Enter any two number: ";
  cin >> a >>b;
  addition common;
  c = common.sum(a,b);
  cout <<"The sum of "<< a << " and " << b << " is: " <<c;
  getch();
  return 0;
 }

