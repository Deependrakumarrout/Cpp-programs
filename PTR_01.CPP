#include<iostream.h>
#include<conio.h>
int main()
	{
	   int a=3,b=5,c=6;
	   int *const addressIsFixed = &a;
	   char * const ptr1 = "Good";
	   clrscr();
	   cout << "Address is fixed: " << addressIsFixed << "\n";
	   cout << "Real address of a: " << &a;
	   cout << "\nBefore initilization the value is: " << *addressIsFixed;
	   a = 12; // Value can be changed of that same variable but not the address.
	   cout << "\n" << *addressIsFixed;

	   // Lets try to initlized again in addressIsFixed constant pointer.
	   // addressIsFixed = &b; // Error cannot modified a const object;
	   // So its prove that we can't able to modify the constant pointer.
	   // [We can say this as pointer to a address]. (we can't able to initilize
	   // another address to the same contant varible.)

	   *addressIsFixed = b;// But here we can initilize a value to addressIsFiexed.
	   cout << "\nAfter value initilization to AdderssIsFixed: " << addressIsFixed;
	   cout << "\nNow it contain: "<<*addressIsFixed;

	   // But address is same but value can changed many times;
	   *addressIsFixed=c;
	   cout <<"\n"<< addressIsFixed;
	   getch();
	   return 0;
	}