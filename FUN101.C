#include<stdio.h>
#include<conio.h>
void display(int);
void main(){
int i=34;
clrscr();
display(i);
printf("%d",i);
getch();
}
void display(int j){
 j = 23;
printf("%d\n",j);
}