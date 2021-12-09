#include<iostream.h>
#include<conio.h>
// OPROVR01 is based on operator overloading BASIC.
class add
{
 int v,d;
 public:
  add();
  void operator + (int);
  void display();
 };

class add1
{
 int b;
  public:
   add1();
}

 add1 :: add1()
 {
  b= 53;
 }

 add :: add()
 {
  v=5;
 }

 void add::operator + (int a)
 {

}


 void add::display()
 {
  cout << "V incremented succefully: " << d;
 }


 int main()
 {
  int c=2;
  clrscr();
  add obj;
  add1 obj1;
   //d + obj;
  //cout << obj;
  cout << "Before ";
  obj.display();
  obj+obj1;
  cout <<"\nAfter ";
  obj.display();
  //obj;
  getch();
  return 0;
 }

