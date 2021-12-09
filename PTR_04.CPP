#include<iostream.h>
#include<conio.h>
// This work with without class but with class is also possible but
// it can be a bit complex to do but i will try it in the next program
// that is: PTR_05.cpp;
typedef void funptr(int,int); //function pointer.
void add(int i, int j)
	{
	  cout << i <<  "+" << j << " = " << i+j;
	}

void subtract(int i, int j)
	{
	  cout << i << "-" << j << " = " << i-j;
	}

int main()
	{
	  funptr *ptr;
	  clrscr();
	  ptr = &add;
	  ptr(4,2);
	  cout << "\n";
	  ptr = &subtract;
	  ptr(8,3);
	  getch();
	  return 0;
	}
