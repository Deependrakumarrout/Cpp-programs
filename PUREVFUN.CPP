#include<iostream.h>
#include<conio.h>
 class Deepen
  {
    public:
      Deepen(){}
      virtual void example()=0;
  };

  class c:public Deepen
  {
    public:

      void example()
       {
	cout<< "\nI am deepn";
       }
      void example1() // Rules: it is mandutary to write override method in
       {	//the child class.
	 cout << "\nI am Deependra";
       }
  };

  class oop:public Deepen
  {
    public:
      void example()
	{
	  cout << "\nSon of MR.Jeetendra Kumar Rout";
	}
  };

  int main()
  {

    clrscr();
    // Deepen a; // cannot create object of instance class.
    Deepen *ptr[2];
    c dtl1;
    oop dtl2;
    ptr[0]=&dtl1;
    ptr[1]=&dtl2;
    ptr[0]->example();
    ptr[1]->example();
    dtl1.example1();
    getch();
    return 0;

  }