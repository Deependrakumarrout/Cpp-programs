#include<iostream.h>
#include<conio.h>
// Finding fraction of a number using recurtion technique.
// It is so created to confuse.
class Fract
{
 int i;
 long int num,fract,value;
 public:
   Fract();
   long int recur(int);

};

Fract::Fract()
{
 fract=1;
}

long int Fract::recur(int num)
{
 Fract ob1;
 for(i=num;i>=1;)
 {
 if(num!=1)
  {
    value = ob1.recur(num-1);
    fract = num * value;
    i--;
  }
  if(num==1)
   {
    break;
   }
 }
 return fract;
}

int main()
{
 Fract frt;
 int num;
 long int hold;
 clrscr();
 cout << "Enter a number: ";
 cin >> num;
 hold = frt.recur(num);
 cout << "\nThe fractorial of " << num << " is: " << hold;
 getch();
 return 0;

}