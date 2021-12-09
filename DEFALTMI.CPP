#include<iostream.h>
#include<conio.h>
class Circle
{
 double radius,pie,area;
 public:
  Circle();
  Circle(double,double);
  double areaOfCircle(double);
};

Circle::Circle()
{
 pie = 3.1416;
}

Circle::Circle(double ra,double p)
{
 // we can initilize here also, without using p as a parameter.
 // like this pie = 3.1416 and remove the double p parameter.
 pie = p;
 radius = ra;

}

double Circle::areaOfCircle(double radius)
{
 area = pie*radius*radius;
 return area;
}

int main()
{
 Circle obj;
 double radi,ar;
 clrscr();
 cout << "Enter the radius for the first circle: ";
 cin >> radi;
 ar = obj.areaOfCircle(radi);
 cout << "The area of the circle is: " << ar;
 cout << "\nEnter the radius of the second circle: ";
 cin >> radi;
 Circle obj1(radi,3.1416);
 ar = obj1.areaOfCircle(radi);
 cout << "The area of the circle is: "<< ar;
 getch();
 return 0;
}
