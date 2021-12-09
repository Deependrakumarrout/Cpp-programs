#include<iostream.h>
#include<conio.h>
 // Based on COPY CONSTRUCTOR

 //int miniAge,maxAge; // By using global variable we can able to overcome
 // with the problem of scope.
 class Copy
 {
  int humanAge,miniAge,maxAge;
  public:
	Copy();
	Copy(int);
	void eligible(void);
	void printMyName();
 };

 int dl;
 Copy::Copy()
 {
  //miniAge = 18;
 // maxAge = 155;
 }

 Copy::Copy(int urAge)
 {
  humanAge = urAge;
   miniAge=18;
   maxAge=155;
 }

 void Copy::printMyName()
 {
  cout << "\nHello i am Deependra...";
  cout << "\nI am a student pursuing my bachlor in BCA.";
  cout << "\nI used to do programming related things";
  cout << "\nI have to practice it daily.";
 }



 void Copy::eligible()
 {
  // if(humanAge<=144&&humanAge>=18)
     if(humanAge<=maxAge&&humanAge>=miniAge)
	{
	cout << "You are eligiable for voting...";
	cout << "\nHuman age passed:"<< humanAge;
	cout << "\nmaxAge and miniAge passed: "<< maxAge <<" "<<miniAge;
	}
     else
     {
	cout << "Sorry you are not eligiable for voting.";
	cout << "\nHuman age passed:"<< humanAge;
	cout << "\nmaxAge and miniAge passed: "<< maxAge <<" "<<miniAge;
     }
 }


 int main()
 {
  int yourAge;
  clrscr();
  cout << "Enter your age: ";
  cin >> yourAge;
  Copy age1;
  Copy age2(yourAge);

 // age1.eligible();
  age2.eligible();
  age2.printMyName(); // The copy constructor prove that it can't able copy
		     // the memeber function of the class but it is used
		     // to copy the constructor that is initilized to the
		     // new object. ex: Copy age3 = age2;
  // Using copy constructor
  Copy age3 = age2;
  cout << "\n\nCall of age3 object:\n";
  age3.eligible();
  getch();
  return 0;
 }



