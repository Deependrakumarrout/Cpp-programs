#include<iostream.h>
#include<conio.h>
// With class trying to do with typedef keyword.
void sum(int a,int b)
{
  cout << a << " + " << b << " : " << a+b;
}

class Basic
 {
  int a,b;
  public:

    //typedef void funBin(int,int);

    void add(int a,int b)
     {
      cout << a << " + " << b << " : " << a+b;
     }

    void subtract(int a,int b)
     {
      //Basic::add(a,b);
      cout << a << " - " << b << " : " << a-b;
     }
 };

 class Derive:Basic
 {
    void add(int a,int b)
    {
     Basic::add(a,b);
     this->subtract(a,b); // This can only be used within a member function.
     cout << "\nMultiply of " << a << " and " << b << a*b;
    }
 };


int main()
 {

  //Basic::funBin *ptr;
  //Basic->add();
 // Basic obj;
  clrscr();
  //ptr = &sum;
  //ptr(3,4);
  //obj.add(4,4);

  //obj.subtract(6,3);

  //1. Basic Basic::add(4,2);
  //2. Basic::Basic.add(2,3);
  //3. Basic.Basic::add(2,3);
  //4. Basic add :: add(2,3);
  //5. Basic add(4,5)::Basic;
  //6. Basic::Basic add(4,3);
  //7. Derive Derive:: add(3,4);
  //8. Derive Derive::add(3,4);
  //9. Basic::Basic::add(3,4);
  //10.Basic Basic :: add(5,4);
  //11.Derive.Basic::add(6,8);
  //12.Basic Derive::add(6,8);


  Basic Basic::add(2,3);


  //ptr = Basic::add;
  //ptr(3,4);
  getch();
  return 0;

 }