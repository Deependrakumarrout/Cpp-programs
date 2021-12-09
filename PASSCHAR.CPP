#include<iostream.h>
#include<conio.h>

 class Pass_name
 {
  int count;
  char name[30];

  public:
	Pass_name();
	void char_length(char *);
	char name1();
 };

 Pass_name::Pass_name()
 {
  count=0;
 }


 void Pass_name::char_length(char *name)
 {
  cout<<name;
  for(int i=1;i<30;i++)
  {
   if(name[i]!='\n')
     count+=i;
   else
    break;
  }
  cout << count;
  //return n;

 }

 int main()
 {
  char name[30];
  Pass_name obj;
  clrscr();
  cout << "Enter your name:";
  cin >> name;
   obj.char_length(&name[0]);
   //cout << obj.name;
  getch();
  return 0;

 }
