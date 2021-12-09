#include<iostream.h>
#include<conio.h>
 class circle
 {
  float radius;
  public:
   float area(float);
 };

 float circle::area(float rd)
 {
  radius = 3.14*rd*rd;
  return radius;
 }

 int main()
 {
  circle radi;
  int r;
  clrscr();
  cout << "Enter the area of a circle: ";
  cin >> r;
  cout << "The area of "<<  r << " circle is: " << radi.area(r);
  getch();
  return 0;
 }