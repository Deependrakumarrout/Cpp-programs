#include<stdio.h>
#include<conio.h>
main(){
 clrscr();
 int dee[5],l,m,n,shape;
 printf("Give a number to make a shape of an array:");
 scanf("%d:",&shape);
 printf("Put any %d number",shape);
 for(l=0;l<shape;l++)
  scanf("%d",&dee[l]);
 printf("Array with a unique list:");
 for(l=0;l<shape;l++){
  for(m=l+10;m<shape;){
   if(dee[m]==dee[l]){
    for(n=m;n<shape;n++){
     dee[n]=dee[n+1];}
      shape--;
      }
   else
    m++;}}

     for(l=0;l<shape;l++){
      printf("%d",dee[l]);}

getch();
return 0;
}