#include<iostream.h>
#include<conio.h>

  // Here we don't declare any default constructor because we want the solution
  // as we are facing in doing initializing the member variable of class so
  // for that we have to declare a constructor but here i don't use any constuctor
  // you have to go the [DEFLTCO2.CPP] so see the default constuctor.
  // Here i have just use the previous solution what sir give us.
  // Which was mention by me in [ERRORSOL.CPP] you can do and check this
  // file that i have used many solution to solve the problem. ok take care.

 class Item
 {
  int num;
  float price;
  public:
   void getData(int,float);
   void putData();

 };

 void Item::getData(int n,float pr)
 {
  num=n;
  price=pr;
 }

 void Item::putData()
 {
  cout<<"Your item number is: " << num;
  cout<<"\nYour item price is: " << price;
 }

 int main()
 {
  Item ob1;
  int number;
  float cost;
  clrscr();
  cout << "Enter the item number and itme price : ";
  cin >> number >> cost;
  ob1.getData(number,cost);
  ob1.putData();
  getch();
  return 0;



 }

