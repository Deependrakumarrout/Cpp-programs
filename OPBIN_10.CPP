#include<iostream.h>
#include<conio.h>
// In this program using multiple class to work with operator function.
// But i can't able to do this above opertion and now its become a
// fun expriment.
// I have access the private member variable of parent class Com1 of num1 and num2
// from a child class. By passing argument as user define object of class Com1.
// So that it can access its class memeber varible.
class Com1
	{
		float num1,num2;
		public:
			Com1(float a,float b)
				{
					num1 = a;
					num2 = b;
				}
			void printme() // first try to print me. In another class (for reminder but now its work over).
				{

					cout << "I am in Com1 class: bro";
					cout << "\nThe value of num1 " << num1;
					cout << "\nThe value of num2 " << num2;
					cout << "\nExecution over of com1 Class";
				}
	};

class Com2
	{
		public:
			Com2()
				{
					// empty default consturctor.
				}
			//Com2 operator +(Com1);    no need of operator.
			void display(Com1 obj) // Here the object pass as paramete Com1 type
			// i.e (ob) that pass a copy to the obj object then it can able
			// to access its member function of its own class Com1.
				{
					// Here printme is the member function
					// so it can able acces its all member
					// varible of Com1 class.
					obj.printme(); // called to printme().

					cout << "\nExecution over of class: com2\n";
				}
	};


/*
Com1 Com1 :: accessPrivate(Com1 obj)
	{
		obj.num1 = num1;
		obj.num2 = num2;
		return obj;
	}
*/

/*
Com2 Com2 :: operator + (Com1 ob)
	{
		ob.accessPrivate(ob);
		//ob.num1 = ob.num;
		return ob;

	}
*/

int main()
	{
		clrscr();
		// ob : object of Com1 class.
		Com1 ob = Com1(4,5);
		cout << "Called from Com1 class -> \n";
		// printme function is a member or Com1 class.
		ob.printme();

		// ob1 : object of Com2 class.
		Com2 ob1 = Com2();
		cout << "\n\nCalled from Com2 class -> \n";
		// Here ob1 called to its member fuction i.e display function
		// which is define in the Com2 class. But here ob1 pass the
		// object of Com1 class as an argument that means it can
		// access all the public section funtion of its class (Com1).
		ob1.display(ob);
		cout << "Exection successfull";
		getch();
		return 0;
	}