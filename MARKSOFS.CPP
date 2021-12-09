#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int m,p,c,b,I,h;
float mark_score,percentage;
printf("Enter the 6 subject mark that student has score:");
scanf("%d%d%d%d%d%d",&m,&p,&c,&b,&I,&h);
mark_score=m+p+c+b+I+h;
percentage=(mark_score/600)*100;
printf("The Total mark that student has scored is: %.2f\n",mark_score);
printf("The Total percentage that the student gain is: %.2f\n",percentage);

if(percentage>=85){
printf("Grade A");}
else if(percentage>=75){
printf("Grade B");}
else if(percentage>=50){
printf("Grade c");}
else if(percentage>=40){
printf("Fail");}
else
printf("Study from root");
getch();
return 0;

}