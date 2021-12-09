#include<stdio.h>
#include<conio.h>
void main()
{
int a1,b2;
int result;
clrscr();
printf("d score in math");
scanf("%d",&a1);
printf("s score in physics");
scanf("%d",&b2);

result=a1+b2;
printf("The value of %d and %d is %d", a1,b2,result);
getch();
}