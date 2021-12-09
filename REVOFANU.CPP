#include<iostream.h>
#include<conio.h>
 class reverse
 {
  public:
  int num;
  public:
  void printReverse(int);
 };
 void reverse::printReverse(int n1)
 {
  int i=0;
  cout << "The reverse of "<< n1 << " is:\n";
  for(i=n1;i>0;i--)
  {

   cout << i <<"\n";
  }
 }


 int main()
 {
  clrscr();
  reverse input;
  cout << "Enter a numbe to get reverse of the number:";
  cin >> input.num;
  input.printReverse(input.num);
  getch();
  return 0;
 }

