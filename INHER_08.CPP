#include<iostream.h>
#include<conio.h>

const int size = 3; // global variable
class Sample
  {
    public:
      int v[size];
    public:
	Sample();// default constructor
	Sample(int *); // parameterized constructor

	friend Sample operator *(int a, Sample b);
	// Operator function with a parameter which system define and user define.

	friend Sample operator *(Sample b, int a);
	// Operator function overloading.

	friend istream &operator >> (istream &, Sample &);
	// Right shift operator overloading

	friend ostream &operator <<  (ostream &, Sample &);
	// Left shift operator overloading
  };

  Sample::Sample()
	{
	  for(int i=0;i<size;i++)    // initilizing all the value to 0.
	    v[i]=0;
	}

 
  Sample:: Sample(int *x)   // i changed here and in prototype too.
	{                             // a bit confuse.
	  for(int i=0;i<size;i++)
	    v[i] = x[i];
	}


  Sample operator *(int a, Sample b)
	{
	  Sample c;
	  for(int i=0;i<size;i++)
	    c.v[i] = a*b.v[i]; // b.v[i] done by me.
	  return c;
	}


  Sample operator *(Sample b, int a)
	{
	  Sample c;
	  for(int i=0;i<size;i++)
	    c.v[i] = b.v[i] * a;
	  return c;
	}

  istream &operator >> (istream &din, Sample &b)
	{
	  for(int i=0;i<size;i++)
	    din >> b.v[i];
	  return din;
	}

  ostream &operator << (ostream &dout, Sample &b)
	{
	  //dout << "C" << b.v[0];
	  dout << b.v[0];
	  for(int i=1;i< size; i++)
		{
		  dout << ","<< b.v[i];
		  //dout << " :";
		}
	  return dout;
	}


  int x[size] = {2,4,6}; // without scope
  int main()
	{
	  Sample m;
	  Sample n=x; // not done by me.
	  clrscr();
	  cout << "Enter element of Sample m: " << "\n";
	  cin >> m;
	  cout << "\n";
	  cout << "m = " << m << "\n";
	  Sample p,q;
	  p = 2*m;
	  q = n*2;
	  cout << "\n";
	  cout << "p = " << p << "\n";
	  cout << "q = " << q << "\n";
	  getch();
	  return 0;
	}

  /*
  class Sample
  {
   public:
    int b,n[3];
    Sample(){
    }
    Sample(int a[])
	{
	 for(int i=0;i<3;i++)
	   n[i]=a[i];
	}
  };

     int const size = 3;
     int x[size] = {2,34,54}; // without scope

  int main()
	{
	  Sample m;
	  Sample n1=x; // not done by me.
	  for(int i=0;i<3;i++) {
	   cout << n1.n[i] << "\n";}
	  clrscr();
	  getch();
	  return 0;
	}

  */
