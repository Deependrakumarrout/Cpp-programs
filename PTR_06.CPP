#include<iostream.h>
#include<conio.h>
/*
class Base
  {
   public:
    void display()
      {
	cout << "\n display base";
      }

    virtual void show()
      {
	cout << "\n show base version";
      }

  };
class Derive:public Base
 {
  public:
    void display()
      {
	cout << "\n display derive";
      }
    void show()
      {
	cout << "\n show derived version";
      }
 };

int main()
 {
   Base b;
   Derive d;
   Base *bptr;
   clrscr();
   cout << "\n bptr points to base\n";

   bptr = &b;
   bptr->display();
   bptr->show();
   cout << "\n\n bptr points to derived\n";
   bptr=&d;
   bptr->display();
   bptr->show();
   getch();
   return 0;
 }
 */





class Base
 {
   public:

    void display()
       {
		cout <<"\nI am display function of base class.";

       }

    virtual void apple()
       {
	cout << "\nI am base's class Apple.";
       }

 };

class Derive:public Base
 {
   public:
      void display()
       {
		cout << "\nI am display function of derive class.";
       }
      void apple()
       {
		cout<< "\nI am derived's class Apple.";
       }
 };

int main()
 {

   Base b;
   Derive d;
   Base *bptr;
   clrscr();
   cout << "\nExecution starts from here.";
   bptr = &b;
   bptr->display();
   bptr->apple();
   cout << "\n\nCalled to child class's memeber function.";
   bptr = &d;
   bptr->display();
   bptr->apple();
   cout << "\nExecution end from here.";
   getch();
   return 0;
 }

