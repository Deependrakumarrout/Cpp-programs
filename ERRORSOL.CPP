#include<iostream.h>
#include<conio.h>

 // PROBLEM IN THIS PROGRAM :- (So i commented it.
 // By commenting out we can able to execute our program).
 /*
 class Item
 {
   int no;
   float price;
   public:
	void getData(int,float);
	void putData();
 };

 void Item::getData(int no,float price)
 {
  cout << "Enter the number & price of the item: ";
  cin >> no >> price;
 }

 void Item::putData()
 {
  cout << "The item no is:"<< no << "\n";
  cout << "The price of the item is: "<< price;
 }

 int main()
 {
  Item i;
  float number,p;
  clrscr();
  i.getData(100,75.5);
  i.putData();
  getch();
  return 0;
 }
 */



 /*  1: solution of the above program.
   -> Cut function argument in prototype as well as in defination
    and simply call the memeber function in main function.
 */


 /*

   class Item
 {
   int no;
   float price;
   public:
	void getData();
	void putData();
 };

 void Item::getData()
 {
  cout << "Enter the number & price of the item: ";
  cin >> no >> price;
 }

 void Item::putData()
 {
  cout << "The item no is:"<< no << "\n";
  cout << "The price of the item is: "<< price;
 }

 int main()
 {
  Item i;
  float number,p;
  clrscr();
  i.getData();
  i.putData();
  getch();
  return 0;
 }
 */


  /*
  2: Solution of the above problem program.
  -> Declare object globally and throght object access the data directly
     in the member function.
  */

 /*
 class Item
 {
   int no;
   float price;
   public:
	void getData();
	void putData();
 };
 Item i;
 void Item::getData()
 {
  cout << "Enter the number & price of the item: ";
  cin >> i.no >> i.price;
 }

 void Item::putData()
 {
  cout << "The item no is:"<< i.no << "\n";
  cout << "The price of the item is: "<< i.price;
 }

 int main()
 {
  //Item i; // Declaring globally.
  float number,p;
  clrscr();
  i.getData();
  i.putData();
  getch();
  return 0;
 }
 */


 /*
  3: Another solution of above problem program.
  -> Or we can declare a temporary variable in the class and give the value of
     dynamic variable to the temporary variable and also assign them in our
     which are required in the memeber function.
 */


/*
 class Item
 {
   int no,n1;
   float price,p1;// Here temporary variable are n1 and p1 which hold
		 // the value of no and price;
   public:
	void getData(int,float);
	void putData();
 };

 void Item::getData(int no,float price)
 {
  cout << "Enter the number & price of the item: ";
  cin >> no >> price;
  n1 = no;
  p1 = price;
 }

 void Item::putData()
 {
  cout << "The item no is:"<< n1 << "\n";
  cout << "The price of the item is: "<< p1;
 }

 int main()
 {
  Item i;
  float number,p;
  clrscr();
  i.getData(100,75.5);
  i.putData();
  getch();
  return 0;
 }

 */


 // 4: Another way to get solution of same problem by using constructor.


 class Item
 {
   int no;
   float price;
   public:
	Item (int,float);
	void putData(void);
 };

 Item::Item(int n,float pr)
 {
  no = n;
  price = pr;
 }

 void Item::putData()
 {
  cout << "The item no is:"<< no << "\n";
  cout << "The price of the item is: "<< price;
 }

 int main()
 {
  int no;
  float p;
  clrscr();
  cout << "Enter the item number and price of the item : ";
  cin >> no >>p;
  Item i(no,p);
  i.putData();
  getch();
  return 0;
 }


 /*
 Solution:
 1. Cut function argument in prototype as well as in defination
    and simply call the memeber function in main function.
 2. Declare object globally and throght object assces the data.
 3. Or we can declare a temporary variable in the class and give the value of dynamic variable to the temporary variable.
    and also assign them in our which are required in the memeber function.
 4. Last but not the least sir give solution that use contructor.
 */
