#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
// Here puts() and gets() function are define in the stdio.h (header file)
// so i have to define include the stdio.h hearder file to use puts and gets.

// And strcpy is define the the string.h (header file)
class Media
  {
    protected:
      char title[50];
      float price;
    public:
      Media(char *s,float a)
       {
	 strcpy(title,s);
	 price = a;
       }

    virtual void display()
      {
	// empty virtual function.
      }
  };

class Book: public Media
 {
   int pages;
   public:
     Book(char *s,float a,int p):Media(s,a)
      {
	pages = p;
      }

   void display();
 };

 class Tape:public Media
 {
  float time;
  public:
    Tape(char *s,float a,int t):Media(s,a)
	{
	  time = t;
	}
    void display();

 };

 void Book::display()
  {
    cout << "\n Title: " << title;
    cout << "\n Pages: " << pages;
    cout << "\n price: " << price;
  }

  void Tape::display()
   {
    cout << "\n Title: " << title;
    cout << "\n Play time: " << time << " minutes...";
    cout << "\nPrice: " << price;
   }

   int main()
    {
      char *title = new char[30];
      float price=0,time=0;
      int pages;
      clrscr();
      cout << "ENTER BOOK DETAILS: " << "\n";
      cout << "Title: ";
      gets(title);
      cout << "Pages: " << "\n";
      cin >> pages;
      cout << "Price: " << "\n";
      cin >> price;
      Book book1(title,price,pages);
      cout << "ENTER TAPE DETAILS: " << "\n";
      cout << "Title: ";
      gets(title);
      cout << "Price: ";
      cin >> price;
      cout << "Play time(in minutes): ";
      cin >> time;
      Tape tape1(title,price,time);
      Media *list[2];
      list[0]=&book1;
      list[1]=&tape1;
      cout << "\nMEDIA DETAILS: " << "\n";
      cout << "\n....book....";
      list[0]->display();
      cout<<"\n....tape....";
      list[1]->display();
      getch();
      return 0;
    }

