#include<iostream.h>
#include<conio.h>
 // Part two of parameterized constructor.
 class PassNum
 {
  int num1,num2;
  public:
   PassNum(int,int);
   int firstNum();
   int secondNum();
 };

 PassNum::PassNum(int x,int y)
 {
  num1=x;
  num2=y;
 }

 int PassNum::firstNum()
 {
  return num1;
 }

 int PassNum::secondNum()
 {
  return num2;
 }

 int main()
 {
  PassNum obj(112,234);
  clrscr();
  cout << "First number is: "<< obj.firstNum() << "\nSecond number is: " << obj.secondNum();
  getch();
  return 0;
 }
