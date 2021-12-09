#include<iostream.h>
#include<conio.h>

class Vehicle
 {
   protected:
    int speed,milage,rpms;
   public:
    Vehicle(){}
    Vehicle(int spd,int mlg,int rpm)
    {
      speed = spd;
      milage = mlg;
      rpms = rpm;
    }

    virtual void spec()=0;
    virtual void displaySpec()=0;
 };

class LMV:public Vehicle   // LMV - Light Motor Vehicle
 {
   public:
     LMV(){}
     int s,m,r;
     LMV(int speed,int milg,int rpm):Vehicle(speed,milg,rpm)
     {
      //s = speed;
      //m = milg;
      //r = rpm;
     }
     void spec();
     void displaySpec();
 };


 void LMV ::spec()
 {
   cout << "Enter the vehicle Top speed: ";
   cin >> speed;
   cout << "Enter the vehicle milage: ";
   cin >> milage;
   cout << "Enter the vehicle rmp: ";
   cin >> rpms;
   cout<< "\nSpeed in LMV: " << speed;
   LMV h(speed,milage,rpms);
 }

 void LMV ::displaySpec()
  {
    cout <<"\n"<< speed;
    cout <<"\n"<< milage << " kmpl";
    cout <<"\n"<< rpms;

  }

class HMV:public Vehicle  // HMV - Heavy Motor Vehicle
 {
  public:
    HMV(){}
    int s1,m1,r1;
    HMV(int spd,int milg,int rmp)
    {
     s1 = spd;
     m1 = milg;
     r1 = rmp;
    }

    void spec()
     {
      cout<< "\nSpeed of LMV class: " << speed;
      LMV dtl(speed,milage,rpms);
      cout<< "\nHey i am hmv class";
      cout<< "\nEnter speed:";
      cin >> speed;
      cout << "Enter milage: ";
      cin >> milage;
      cout << "Enter rpm: ";
      cin >> rpms;

      Vehicle *abst[2];
      abst[0]=&dtl;
      abst[0]->displaySpec();
      HMV dtl2(speed,milage,rpms);
      abst[1]=&dtl2;
      abst[1]->displaySpec();
     }
    void displaySpec()
    {
      cout<< "\nI am display Spec of HMV class\n";
      cout<<s1 << " " << m1 << " " << r1;
    }
 };

class TwoWheeler:public Vehicle
 {

 };

 int main()
 {
   clrscr();
   Vehicle *obj[2];
   LMV obj1;
   HMV obj2;
   obj[0]=&obj1;
   obj[1]=&obj2;
   obj[0]->spec();
   obj[1]->spec();
   getch();
   return 0;

 }