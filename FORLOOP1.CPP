#include<iostream.h>
#include<conio.h>
class For
{
 int i,num;
 public:
  void print_num(int &);

};

void For::print_num(int &n)
{
 for(i=1;i<=n;i++)  //why i can't able to use i in for.
 {
  cout << i <<"\n";
 }

}

int main()
{
For obj;
int num;
clrscr();
cout << "Enter a number : ";
cin >> num;
obj.print_num(num);
getch();
return 0;

}