#include<iostream.h>
#include<conio.h>
class Sample
{
 int a,b;
 public:
  void setValue()
   {
     a=5;
     b=34;

   }
   friend float mean(Sample);

};

float mean(Sample x)
{
 return (x.a+x.b)/2.0;
}

int main()
{
 Sample x;
 clrscr();
 x.setValue();
 cout << "Mean value = " << mean(x) << "\n";
 getch();
 return 0;
}
