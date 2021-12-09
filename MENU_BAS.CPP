#include<iostream.h>
#include<conio.h>
class menu
 {
  public:
  int  choice,res;
  public:
   void menu_based();
   int operation(int,int);
   int single_operation(int);
 };

 void menu:: menu_based()
 {
   cout << "Press 1 for additon ->\n";
   cout << "Press 2 for subtraction ->\n";
   cout << "Press 3 for multiplication ->\n";
   cout << "Press 4 for division ->\n";
   cout << "Press 5 for modular of two number ->\n";
   cout << "Press 6 for square of a number ->\n";
   cout << "Press 7 for cube of a number ->\n\n";

   cout << "Enter your choice: ";
   cin >> choice;
 }


 int menu::single_operation(int n1)
 {
   switch(choice)
   {
    case 6:
    {
     cout << "You have selected for square.\n";
     res = n1*n1;
     break;
    }
    case 7:
    {
     cout << "You have selected for cube.\n";
     res = n1*n1*n1;
     break;
    }
    default:
     cout << "ITEM OUT OF BOUND";
   }
   return res;
 }


 int menu::operation(int n1,int n2)
  {
  switch(choice)
  {
   case 1:
   {
    res = n1+n2;
    break;
   }

   case 2:
   {
    res = n1-n2;
    break;
   }

   case 3:
   {
    res = n1*n2;
    break;
   }

   case 4:
   {
    res = n1/n2;
    break;
   }

   case 5:
   {
    res = n1%n2;
    break;
   }
   default:
    cout << "Element out of bound...";
  }
  return res;
  }


 int main()
  {
   int a,b;
   clrscr();
   menu ari;
   ari.menu_based();
   if(ari.choice == 6 || ari.choice == 7)
    {
     cout << "Enter a number: ";
     cin >> a;
     ari.res = ari.single_operation(a);
    }
    else
    {
     cout << "Enter the first number: ";
     cin >> a;
     cout << "Enter the second number: ";
     cin >> b;
     ari.res = ari.operation(a,b);
   }

   cout << "The result is: " << ari.res;
   cout << "\n\nEXECUTION COMPLECTED SUCCESSFULLY...";
   getch();
   return 0;
  }
