#include<iostream.h>
#include<conio.h>

class Calculator  //Abstract class.
 {
  protected:
   int n1,n2;
   public:
    Calculator()   // Empty Default constructor.
     {
     }

    Calculator(int a,int b) // Parameterized constructor.
     {
       n1 = a;
       n2 = b;
     }
    virtual void operation()=0; //Both are pure virtual function.
    virtual void askForInput()=0;
 };


class Sum:public Calculator //Child of abstract base class.
 {
   public:
     Sum () {} // Empty default constructor.
     Sum (int a1,int b2):Calculator(a1,b2){}//constructor inheritance.

     void operation() {  // Overridden method.
      cout << "\n-----------------------";
      cout << "\n" << n1 << " + " << n2 << " = " << n1+n2;
      cout << "\n-----------------------";
    }
   void askForInput(); //prototype of overridden method.
 };

   void Sum::askForInput() {  //Defining askForInput()
   Calculator *obj[1]; //array of object to pointer
   int num1,num2;
   cout << "\nEnter first number: ";
   cin >> num1;
   cout << "Enter second number: ";
   cin >> num2;

   Sum calc1(num1,num2);  // call to parameterized constructor.
   obj[0]=&calc1;         // passing address of an object into the array of object to pointer.
   obj[0]->operation();   // call by at the runtime throuht the object.

   //cout << "I'm printing " <<num1 << num2; // just for random.

   //And everything below is same.
 }

class Sub:public Calculator
 {
   public:
     Sub() {}
     Sub(int a,int b):Calculator(a,b) {}
     void operation() {
      cout << "\n-----------------------";
      cout << "\n"<< n1 << " - "<< n2 <<" = " << n1-n2;
      cout << "\n-----------------------";
    }
    virtual void askForInput();
 };

 void Sub::askForInput()
  {
    Calculator *obj[1];
    int num1,num2;
    cout << "\nEnter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    Sub calc2(num1,num2);
    obj[0]=&calc2;
    obj[0]->operation();
  }


 // Level 2 starts ->
class Calc
 {
   protected:
     int n1,n2;
   public:
    Calc(){}
    Calc(int a,int b) {
     n1 = a;
     n2 = b;
    }
    virtual void calculate()=0;
    virtual void giveInput()=0;
 };

class Multi:public Calc
 {
   public:
     Multi(){}
     Multi(int a1,int a2):Calc(a1,a2){}
     void calculate() {
     cout << "\n-----------------------";
     cout<< "\n" << n1 << " * " << n2 << " = " << n1*n2;
     cout << "\n-----------------------";
     }
     void giveInput();
 };

 void Multi::giveInput()
  {
   int num1,num2;
   cout << "\nEnter first number: ";
   cin >> num1;
   cout << "Enter second number: ";
   cin >> num2;
   Multi obj(num1,num2);
   Calc *op[1];
   op[0]=&obj;
   op[0]->calculate();
  }


class Div:public Calc
 {
  float a1,b1;
  public:

    Div(){}

    Div(float a,float b)
    {
     a1 =a;
     b1 =b;
    }
    void calculate() {
      cout << "\n-----------------------";
      cout <<"\n" << a1 << " / " << b1 << " = " << a1/b1;
      cout << "\n-----------------------";
    }
    void giveInput();
 };

  void Div::giveInput() {
   float a1,b1;
   cout <<"\nEnter first number: ";
   cin >> a1;
   cout <<"Enter second number: ";
   cin >> b1;
   Div op1(a1,b1);
   Calc *ob1[1];
   ob1[0]=&op1;
   ob1[0]->calculate();
  }

int main()
 {
   clrscr();
   //For Level 0 ->

   Calculator *obj[3];
   Sum calc1;
   Sub calc2;
   obj[0]=&calc1;
   obj[1]=&calc2;
   cout<< "\n\nOperation for addition:";
   obj[0]->askForInput();
   cout<< "\n\nOperation for subtraction:";
   obj[1]->askForInput();
   Calc *ob1[3];
   //Calculator input;

   // For Level 1 ->
   Multi cal1;
   Div cal2;
   ob1[0]=&cal1;
   ob1[1]=&cal2;
   cout<< "\n\nOperation for multiplication:";
   ob1[0]->giveInput();
   cout<< "\n\nOperation for division:";
   ob1[1]->giveInput();

   cout<<"\nThanks for using...";
   getch();
   return 0;
 }