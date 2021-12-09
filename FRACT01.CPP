#include<iostream.h>
#include<conio.h>
class Fract
{
 long int fract,i;
 public:
  Fract();
  long int getFraction(int);
};

Fract::Fract()
{
 fract = 1;
}

long int Fract::getFraction(int num)
{
 for(i=1;i<=num;i++)
 {
  fract = fract*i;
 }
 return fract;
}

int main()
{

 int number;
 long int getFract=0;
 clrscr();
 Fract findFract;
 cout << "Enter a number to find the fractorial of the number: ";
 cin >> number;
 getFract = findFract.getFraction(number);
 cout << "The fraction of the " << number << " is: " << getFract;
 getch();
 return 0;

}
