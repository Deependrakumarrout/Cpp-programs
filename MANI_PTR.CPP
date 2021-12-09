#include<iostream.h>
#include<conio.h>
int main()
{
 int i=10,*ptr;
 ptr = &i;
 clrscr();
 cout << "\nThe value of i is: " << i;
 cout << "\n\n";
 *ptr = (*ptr)*i;
 cout << "The value of i is: "<<(*ptr);
 cout << "\n\n";
 getch();
 return 0;

}