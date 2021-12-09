#include<iostream.h>
#include<conio.h>
	// Pointer to a constant.(Value cannot be changed)
int main()                       // But address can be changed.
	{
	  const int c = 6;
	  int a=5,b=34;
	  int const *valueIsFixed = &c;
	  clrscr();
	  cout << "Address of ValueIsFixed: " << *valueIsFixed;
	  //*valueIsFixed = b;// Error cannot modify a const(constant) object.
	  valueIsFixed = &b;
	  cout << "\nHow value get changed of variable valueIsFixed: " << *valueIsFixed;
	  getch();
	  return 0;

	}