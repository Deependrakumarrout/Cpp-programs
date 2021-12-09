#include<iostream.h>
#include<conio.h>
// Finding fraction of a number using recurtion technique.
class Fract
{
 long int num,fract;
 public:
   Fract();
   long int recur(int);

};

Fract::Fract()
{
 fract=1;
}

/*
long int Fract::recur(int num)
{
 Fract ob1;

 //cout<<"\nOutside num: "<< num;
 if(num!=1)
 {
    long int hold;
    cout <<"\nafter num: "<<num;  //5,4,3,2
    cout <<"\nafter fact: "<<fract; //1,1,1,1
    hold = ob1.recur(num-1);
    fract = num * hold;
    cout<<"\nhold contain or function contain: " <<hold;  // 1,2,6,24
    cout<<"\nnum now: "<<num; // 2,3,4,5
    cout <<"\nbefore fact: "<<fract; // 2,6,24,120
    return fract;
 }

 cout<< "hello down";
 return fract;
}
*/





int main()
{
 Fract frt;
 int num;
 long int hold;
 clrscr();
 cout << "Enter a number: ";
 cin >> num;
 hold = frt.recur(num);
 cout << "\nThe fractorial of " << num << " is: " << hold;
 getch();
 return 0;
}

// I have writting both the recur function both the time but don't get
// confuse both are on working mode.
long int Fract::recur(int num)
{
 Fract ob1;
 if(num!=1)
 {
    long int hold;
    fract = num * ob1.recur(num-1);
    return fract;
 }
 return fract;
}




















