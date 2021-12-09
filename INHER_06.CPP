#include<iostream.h>
#include<conio.h>
// Assignment done by me...
class Parent
	{
	  protected:
	    int pin;
	  public:
	       // Parent(){}
		 void printPin(int);
	};

	void Parent::printPin(int p)
		{
		  pin = p;
		  cout << "Your pin is: " << pin;
		}

class Child: public Parent
	{
	  protected:
	    int rollNo;
	  public:

	  void printRoll(int n)
		{
		  rollNo = n;
		  cout << "Your Roll number: " << rollNo;
		}
	};

class GrandChild : public Child
 {
    public:
      void printDs();
 };


 void GrandChild::printDs()
 {
  cout << "\nParent class pin is: " << pin;
 }




int main()
	{
	  int pn,rol;
	  clrscr();
	  cout << "Enter your pin: ";
	  cin >> pn;
	  GrandChild obj;
	  //obj.pin = 9;
	  obj.printPin(pn);
	  cout << "\nEnter your roll number: ";
	  cin >> rol;
	  obj.printRoll(rol) ;
	  obj.printDs();
	  getch();
	  return 0;
	}
