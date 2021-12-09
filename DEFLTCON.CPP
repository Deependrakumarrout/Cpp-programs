#include<iostream.h>
#include<conio.h>

 // Fibonachhi serics using Default constructor.
 class Fibo
 {
   double i,num1,num2,temp;
   public:
	Fibo();
	void processFibo(double &);
 };


 Fibo::Fibo()
 {
  temp = 0;
  num1 = 0;
  num2 = 1;
 }


 void Fibo::processFibo(double &num)

 {
  cout << "The fibonachhi series of :" << num << "\n";
  for(i=0;i<num;i++)
  {
   cout << temp <<"\n";
   num1=num2;
   num2=temp;
   temp=num1+num2;
  }

 }

 int main()
 {
  double n;
  Fibo obj;
  clrscr();
  cout << "Enter a number to get fibonachhi series: ";
  cin >> n;
  obj.processFibo(n);
  getch();
  return 0;

 }