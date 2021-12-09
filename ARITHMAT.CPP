#include<stdio.h>
#include<conio.h>
main()
{
int a=5,s;
clrscr();
s= a++ + a++ + ++a + ++a + ++a +a++;
clrscr();
printf("A=%d",a);

printf("\nS=%d\n",s);


int x=5;
printf("\nx=%d",++x);
printf("\nx=%d",++x);
printf("\nx=%d",x++);
printf("\nx=%d",x++);
printf("\nx=%d",x++);
printf("\nX=%d",++x);
printf("\nx=%d",x++);
printf("\nx=%d",x++);
printf("\nx=%d",++x);
printf("\nx=%d",x++);
printf("\nx=%d",++x);
printf("\nx=%d",x++);
printf("\nx=%d",x);
getch();
}