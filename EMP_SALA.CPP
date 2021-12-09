#include<iostream.h>
#include<conio.h>

 class Emp
 {
  float hra,da,pf,net_sal,g_sal;
  public:
   float net_salary(float);
   float g_salary(float);
 };

 float Emp::net_salary(float bs)
 {
  hra=(bs*15)/100;
  da=(bs*10)/100;
  pf=(bs*20)/100;
  net_sal=bs+hra+da-pf;
  return net_sal;
 }

 float Emp::g_salary(float bs)
 {
  //hra=0.15,da=0.1;
  g_sal=bs+hra+da;
  return g_sal;
 }

 int main()
 {
   Emp emp1;
   float bas_sal,net_sal,g_sal;
   clrscr();
   cout << "Enter the basic salary: ";
   cin >> bas_sal;
   net_sal=emp1.net_salary(bas_sal);
   g_sal=emp1.g_salary(bas_sal);
   cout << "The employe basic salary of:"<< " "<<bas_sal<<"\n"<< "The Net salary is:"<<" "<<net_sal<<"\n"<<"The Gross salary is of: "<<" "<< g_sal;
   getch();
   return 0;
 }