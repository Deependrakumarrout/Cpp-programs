#include<iostream.h>
#include<conio.h>
// Based on tution work.
int main()
	{
	 int a =10,*ptr;
	 clrscr();
	 ptr = &a;
	 cout << "The value of a: " << *ptr;
	 *ptr = *ptr + a;
	 //a=67;
	 cout << "\nThe value of ptr " << a;
	 getch();
	 return 0;
	}