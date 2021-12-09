#include<iostream.h>
#include<conio.h>
 int count=0; // global variable declaration
 class Test
 {
  public:
	Test()
	 {
	  count++;
	  cout <<"\nConstructor message: Object number: " << count << " Created";

	 }
	 void display()
	 {cout << "HelO";}
      /*
	 ~Test()
	   {
	    cout <<"\n\nDestructor messge:Object number: " <<count << " Destroyed";
	    count--;
	   }
	   */
 };

 int main()
 {
  cout << "\nInside the main block...";
  cout << "\n\nCreating Object1...";
  Test t1;
  {
   cout << "\n\n Inside the code block...";
   cout << "\n\n Creating two more objects t2 and t3...";
   Test t2,t3;

   cout <<"\n\nLeavingthe code Block...";
  }
 // t2.display();

  cout <<"\n\nBack inside the main block...";
  getch();
  return 0;
 }