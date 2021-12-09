#include<iostream.h>
#include<conio.h>

// Based on uninary operator overloding which can do operation only
// with one operand.

class Sample
{
  public:
    int x,y,z;
    // constructor prototype:
    // Sample(int,int,int);
    void getData(int,int,int);
    void display(void);
};


class Sample1
{
 int p,q,r;
   public:
   void display(void);
   void operator = (Sample);
};

// we can create a parameterized constructor here too instead of getData():
/*
Sample::Sample(int a,int b,int c)
{
 x=a;
 y=b;
 z=c;

}
*/

void Sample::getData(int a,int b, int c)
{
 x=a;
 y=b;
 z=c;
}


void Sample::display()
{
 cout <<"x = " << x << "\n";
 cout <<"y = " << y << "\n";
 cout <<"z = " << z << "\n";
}

void Sample1::operator = (Sample s)
{
 p = s.x; // Sample1 value assign top value assignment
 q = s.y;
 r = s.z;
}

void Sample1::display()
{
 cout << "p = " << p << "\n";
 cout << "q = " << q << "\n";
 cout << "r = " << r << "\n";
}


int main()
{
 Sample j;
 Sample1 k;
 clrscr();
 j.getData(10,20,30);
 j.display();
 k=j;  // Call to operator function.
 k.display(); // Call to Sample1's display function.
 getch();
 return 0;
}
