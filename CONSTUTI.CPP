#include<iostream.h>
#include<conio.h>
 // There all but some few things modify by me all these are from tution.
 class Integer
  {
    int m,n;
    public:
	Integer();
	Integer(int);
	Integer(int x,int y);
	void display_m(void)
	 {
	  cout << "\nThe value of M:"<<m;
	 }

	 void display(void)
	  {
	  cout << "The value of M:" << m <<"\n";
	  cout << "The value of N:" << n <<"\n";
	  }

  };

  Integer::Integer()
   {
    m=0;
    n=0;
   }

  Integer::Integer(int i)
   {
    m=i;
   }

  Integer::Integer(int x,int y)
   {
    m=x;
    n=y;
   }

  int main()
  {
   int l,o;
   Integer int3;
   clrscr();
   //cout << "The value of M:" << l << "\n" << "The value of N:" <<o;
   int3.display();
   cout << "\nEnter value for M and N:" << "\n";
   cin >> l >> o;

   Integer int1(l,o);
   int1.display();
   cout << "\nEnter value for M:" << "\n";
   cin >> l;

   Integer int2(l);
   int2.display_m();
   getch();
   return 0;
  }