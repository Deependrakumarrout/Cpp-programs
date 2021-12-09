#include<iostream.h>
#include<conio.h>
class Vehicle
{
 long quantity;
 char brandName[25];
 char carName[20];
 double price;
 public:
  //Vehcile(char[]); // i don't know how to initilize a character into
  // a parameterized constructor.


  // Constructor prototype:
  Vehicle();


  // For Ford Brand...
  void vehicleDetail()
  {
   Vehicle obj1;
   cout << "Enter the detail For FORD(.^.)";
   cout << "\nEnter the Brand name: ";
   cin >> brandName;
   cout << "Enter the Car name: ";
   cin >> carName;
   cout << "Enter the vehicle quantity: ";
   cin >> quantity;
   cout << "Enter the price of the vehicle: ";
   cin >> price;
  }

  void vehicleDetail(int n)
  {
   n=0;
   cout << "\n\nEnter the detail For TATA(.$.)";
   cout << "\nEnter the Brand name: ";
   cin >> brandName;
   cout << "Enter the Car name: ";
   cin >> carName;
   cout << "Enter the vehicle quantity: ";
   cin >> quantity;
   cout << "Enter the price of the vehicle: ";
   cin >> price;
  }


  // This the friend function which help us to use in multiple classes but
  // here i don't use more than one class so for practice purpose only
  // i have created this friend function using overLoading funciton.
  friend void display(Vehicle);

};

 // parameterized constructor.
 Vehicle::Vehicle()
 {
  quantity = 0;
  price = 0;
 }


 void display(Vehicle as)
 {
   cout << "\nThe Brand name is: "<< as.brandName;
   cout << "\nThe Car name is: "<< as.carName;
   cout << "\nThe vehicle quantity: "<<as.quantity;
   cout << "\nThe price of the vehicle is: "<<as.price;
 }




 //Vehicle::Vehicle(char n[])
// {
  //int i =0;
  //brandName[i] = n[i];
// }

int main()
{
 Vehicle obj;
 int n3=0;
 char bname[30];
 clrscr();
 //cout << "Enter the brand name: ";
 //cin >> bname;
 //cout << bname;
 obj.vehicleDetail();
 display(obj);
 obj.vehicleDetail(n3);
 display(obj);
 getch();
 return 0;
}
