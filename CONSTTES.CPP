#include<iostream.h>
#include<conio.h>
 class Test
 {
   int num[5];
   public:
	Test(int);
	void search();

 };

 Test::Test(int n[])
 {
   for(int i=0;i<5;i++)
   n[i]=num[i];

 }


 int main()
 {
 clrscr();
 cout << "The name";
 getch();
 return 0;


 }