#include<iostream.h>
#include<conio.h>
// Assignment of tution...
class Student
	{
	  int rollNo;
	  public:
		Student(){ rollNo = 0; }
		void getRoll(int);
		void putRoll();
	};

void Student::getRoll(int rl)
	{
	  rollNo = rl;
	}

void Student::putRoll()
	{
	  cout << "\nStudent roll number is: " << rollNo;
	}


class Test:public Student
	{
	  public:
		int marks1,marks2;
		Test(int m1,int m2)
		 {
		   marks1 = m1;
		   marks2 = m2;
		 }
		void marksScored();
	};

void Test :: marksScored()
	{
	  cout << "\nFor paper 1: " << marks1;
	  cout << "\nFor paper 2: " << marks2;
	}

class Result:public Student
	{
	  int m1,m2,result;
	  public:
		 void operator = (Test);
		 void displayResult();
		 void assign(Test&);
	};

void Result::assign(Test &cb)
	{
	  cb.marksScored();
	  m1 = cb.marks1;
	  m2 = cb.marks2;
	}

/*
void Result ::operator = (Test oj)
	{
	  m1 = oj.marks1;
	  m2 = oj.marks2;
	}
*/

void Result::displayResult()
	{
	  result = m1 + m2;
	  cout << "\nStudent your result is: " << result;
	}

int main()
	{
	  int rNum,mk1,mk2;
	  clrscr();
	  cout << "\nEnter your roll: ";
	  cin >> rNum;
	  cout << "\nEnter your marks of paper 1 and paper 2: ";
	  cin >> mk1 >> mk2;
	  Test child1(mk1,mk2);
	  //Test::marksScored();
	  Result child2;
	  //ob1 = obj;
	  child2.getRoll(rNum);
	  child2.putRoll();
	  //child1.marksScored();
	  child2.assign(child1);
	  child2.displayResult();
	  getch();
	  return 0;
	}
