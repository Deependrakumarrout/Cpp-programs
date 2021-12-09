#include<iostream.h>
#include<conio.h>
  // Programe of perimeter and radius of the circle.
 class Circle
 {
  float r,pie,area;
  public:
	Circle();
	float radius(float);
	float perimeter(float);
 };

 float Circle::radius(float r)
 {
  area = pie*r*r;
  return area;
 }

 Circle::Circle()
 {
  pie = 3.1416;
 }

 float Circle::perimeter(float r)
 {
  area = 2*pie*r*r;
  return area;
 }

 int main()
 {
  Circle c;
  float radi,peri,area;
  clrscr();
  cout << "Enter the radius of the circle: ";
  cin >> radi;
  area = c.radius(radi);
  cout << "The radius of "<<radi<<" and the area of the circle is: "<<area;
  cout << "\nEnter the perimeter of the circle: ";
  cin >> peri;
  area = c.perimeter(peri);
  cout << "The perimeter of "<<peri<<" and the area of the perimeter is: " << area;
  getch();
  return 0;
 }
