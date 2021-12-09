#include<iostream.h>
#include<conio.h>
 class is_prime
 {
  int num;
  public:
   void checkPrime();
 };

 void is_prime::checkPrime()
 {
  cout << "Enter a number to check wheater it a prime number or not: ";
  cin >> num;
  int i = 0,count=0;
  for(i=1;i<=num;i++)
  {
   if(num%i==0)
   {
     count++;
   }
  }
  if(count == 2)
  {
   cout << num << " is a prime number.";
  }
  else
  {
   cout << num << " is not a prime number.";
  }

 }

 int main()
 {
  clrscr();
  is_prime ob1;
  ob1.checkPrime();
  cout << " \nProgram exit successfully";
  getch();
  return 0;
 }