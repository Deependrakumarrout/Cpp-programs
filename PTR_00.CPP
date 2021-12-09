#include<iostream.h>
#include<conio.h>
int main()
	{              // Pointer arithmatic...(All operation of c.)
	  clrscr();
	  int a=10;
	  //int &ptr=a;
	  int *ptr = &a;
	  int arr[]={10,20,30,45,7,55,74};
	  int *i,*j,*k;

	  // Example 1:
	  i = &arr[1];
	  j = &arr[5];
	  cout << j-i <<" "<< *j-*i;
	  j = &arr[4];
	  k = (arr+4);
	  // Example 2:
	  if(j==k)
	    cout << "\nThe two pointer points to the same location";
	  else
	    cout << "\nThe two pointer do not points to the same location";

	  // Example 3:
	  cout << "\nValue of ptr 1: " << *ptr;
	  *ptr = *ptr * a; //indirectionally initilizing value to a variable.
	  ptr+=1;
	  cout << "\nValue of ptr 2: " << *ptr;
	  cout << "\nValue of a : " << a;

	  // Example 4:
	  int b=4,*e,*p;
	  e=&b;
	  e=e+1;
	  e=e+9;
	  p=e+3;
	  cout <<"\n1: *e-> " << *e << "\n2: e-> " << e << "\n3: *p-> "<< *p <<"\n4: p-> "<< p;

	  // Example 5:
	  int x=4,z=6;
	  e=&x;
	  p=&z;
	  int *u;
	  *u = *e + *p;
	  cout <<"\nValue is: "<< *u <<"\n";

	  getch();
	  return 0;
	}