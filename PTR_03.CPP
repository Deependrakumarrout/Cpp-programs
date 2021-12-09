#include<iostream.h>
#include<conio.h>
int main()
	{
	  int a=14,b=23;
	  const int *const ptr = &a;  // Address is fixed and value is also fixed.
	  clrscr();
	  //*ptr = b;
	  //ptr = &b; // Both two cause error (cannot modify a const object.)
	  cout << *ptr;
	  getch();
	  return 0;

	}
