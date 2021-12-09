#include<iostream.h>
#include<conio.h>
int a = 1;
class Test
{
 private:
   int count;
 public:
   Test(int a):count(a){}//This is as same as the commented Test parameterized constructor.
   //Test(int a)
   //{
   //  count = a;
   //}
   void operator ++()
   {
     count = count + 3;
   }

   void display()
   {
    cout << "Count : " << count;
    cout << "\nValue of a: " << a;
   }
};

int main()
{
  int b;
  clrscr();
  cout << "Enter a number: ";
  cin >> b;
  Test b1(b);
  ++b1;
  b1.display();
  getch();
  return 0;
}
