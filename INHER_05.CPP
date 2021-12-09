#include<iostream.h>
#include<conio.h>
// Based on tution program...
class Student
	{
	 protected:
	   int roll_no;
	 public:
	   void get_roll_no(int);
	   void put_roll_no(void);
	 };

	 void Student::get_roll_no(int a)
		{
		  roll_no = a;
		}
	 void Student::put_roll_no()
		{
		  cout << "\nRoll no is: " << roll_no << "\n";
		}

class Test:public Student
	{
	  protected:
	    float marks1,marks2;
	  public:
	    void get_marks(float,float);
	    void put_marks(void);
	};

	void Test::get_marks(float x, float y)
		{
		  marks1 = x;
		  marks2 = y;
		}

	void Test::put_marks()
		{

		  cout << "\nMarks in subject1 = " << marks1;
		  cout << "\nMarks in subject2 = " << marks2;
		}

class Result: public Test
	{
	  float tot_marks;
	  public:
		void display(void);
	};

void Result::display()
	{
	  tot_marks = marks1 + marks2;
	  put_roll_no();
	  put_marks();
	  cout << "\nAgain printing your roll number: " << roll_no;
	  cout << "\nTotal marks: " << tot_marks;
	}

class Dee: public Result
	{
	  public:
	    void display1();
	};

void Dee::display1()
	{
	      cout << "\nMarks in subject1 = " << marks1;
	      cout << "\nMarks in subject2 = " << marks2;
	      cout << "\nAgain printing your roll number: " << roll_no;
	}


int main()
	{
	  Dee st1;
	  clrscr();
	  st1.get_roll_no(111);
	  st1.get_marks(75,62.5);
	  st1.display();
	  st1.display1();
	  getch();
	  return 0;
	}
