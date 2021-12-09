#include<iostream.h>
#include<conio.h>
class Student
{
 int roll;
 float marks;
 public:
  void display();

};

void Student::display()
{


}

int main()
{

Student s1;
Student *ptr;
ptr = &s1; // Here it holds 6 byte as in the class, total size of variable
 // declaration in the class definition.
clrscr();
cout << "Address of s1: " << &s1; // fff0
cout << "\nAddress of ptr: " << &ptr; //ffee
ptr++;
cout << "\nNow the address of s1: " << ptr;  // Here its a disadvantage of
	// pointer varible using in class, it stores the total size of the class.

getch();
return 0;

}
