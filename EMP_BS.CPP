#include<iostream.h>
#include<conio.h>

 class Emp
 {
  float bs,bs1,hra,da,pf,net_sal,g_sal;
  public:
   float hra1(float);
   float da1(float);
   float pf1(float);
   float net_salary(float);
   float g_salary(float);
 };

 float Emp::hra1(float bs)
 {
   hra=(bs*15)/100;
   // bs1=bs; <- we can put this as to replace the bs parameter and argument of all the below functions.
   return hra;
 }

 float Emp::da1(float bs)
 {
  da=(bs*10)/100;
  return da;
 }

 float Emp::pf1(float bs)
 {
  pf=(bs*20)/100;
  return pf;
 }

 float Emp::net_salary(float bs)
 {
  net_sal=bs+hra+da-pf;
  return net_sal;
 }

 float Emp::g_salary(float bs)
 {
   g_sal=bs+hra+da;
   return g_sal;
 }

 int main()
 {
 Emp calc_bs;
 float bs,net,gross,hra,da,pf;
 clrscr();
 cout << "Enter the basic salary: ";
 cin >> bs;
 hra = calc_bs.hra1(bs);
 da = calc_bs.da1(bs);
 pf = calc_bs.pf1(bs);
 net = calc_bs.net_salary(bs);
 gross = calc_bs.g_salary(bs);
 cout <<"The Basic Salary is: "<<bs<<"\n";
 cout <<"The House Rent Allowance (HRA) is: "<<hra<<"\n";
 cout <<"The Dearness Allowance (DA): "<<da<<"\n";
 cout <<"The Provident Fund (PF): "<<pf<<"\n";
 cout <<"The net Salary is: "<<net<<"\n";
 cout <<"The Gross Salary is: "<<gross<<"\n";
 cout <<"The Total Amount is: "<<net+gross;
 getch();
 return 0;
 }