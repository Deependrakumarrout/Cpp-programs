#include<iostream.h>
#include<conio.h>

 class Student
 {
  int marks,total_marks;
  float percentage;
  public:
   float result(float,float);//here we have to declare float as argument
   // of the memeber function of student class where interger can't able
   // to do the job as its only returning 0. Ex: 227/600 = 0 where in float
   // it would be 0.378333 -> so this is correct way to do the operation.
 };

 float Student::result(float marks,float total_marks)
 {

  percentage = (marks/total_marks)*100;
  return percentage;

 }

 int main()
 {
  Student obj;
  int mrk,tot_mrk;
  float rst=0;
  clrscr();
  cout << "Enter your marks and total marks :";
  cin >> mrk >> tot_mrk;
  rst = obj.result(mrk,tot_mrk);
  cout << "The percentage of " << mrk << " mark and " << tot_mrk << " is: " << rst;
  getch();
  return 0;
 }
