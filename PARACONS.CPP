#include<iostream.h>
#include<conio.h>
// Using parameterized constructor.
 class Item
 {
  int num;
  float price;
  public:
   Item(int &,float &);   // parameterized constructor.
 }

 Item::Item(int &item_number,float &item_price) // using reference variable.
 {
  num = item_number;
  price = item_price;
  cout << num << price;
 }


int main()
{
 int n;
 float p;
 clrscr();
 cout << "Enter the number and price of the item: ";
 cin >> n >> p;
 Item(n,p);
 getch();
 return 0;
}