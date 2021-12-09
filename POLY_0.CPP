
#include<iostream.h>
#include<conio.h>
class Volume {
public:
 double volume(double,int);
 int volume(int);
 long volume(long,int,int);
};

int main()
{

 Volume obj;
 clrscr();
 cout << "Calling the volume function for computing the volume of a cube: "<<obj.volume(10);
 cout << "\nCalling the volume function for computing the volume of a cylinder: "<<obj.volume(6,8);
 cout << "\nCalling the volume function for computing the volume of a rectangle: "<<obj.volume(100,75,15);
 getch();
 return 0;
}

int Volume::volume(int s)
{
 return s*s*s;
}

double Volume::volume(double r,int h)
{
 return (3.1416*r*r*h);
}

long Volume::volume(long l,int b, int h)
{
 return (l*b*h);
}
