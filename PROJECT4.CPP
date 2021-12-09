#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
			// Based on tution project.
int obt;
class Inventory
 {
  char name[30];
  int code,object,obj,i;
  char ch;
  float cost;
  public:
  /*
   Inventory()
	{
	i=0;
	object=0;
	obj=0;
	code=456;
	cost=0;
	}

   Inventory(int ob1,int ob2,int cd,int cst)
    {
      object = ob1;
      obj = ob2;
      code = cd;
      cost = cst;
    }
   */
   void codeAlign()
    {
     cout << "\nPRODUCT NAME";
     cout.width(15);
     cout << "PRODUCT CODE";
     cout.width(17);
     cout << "PRODUCT COST\n";
    }

   void getData(void)
    {
     cout <<"Enter name of the product: ";
     gets(name);
     cout <<"Enter code of the product: ";
     cin >> code;
     cout <<"Enter the cost of the product: ";
     cin >> cost;

    }

   void putData()
    {
     cout << setw(10) << name << setw(13) << code <<
     setprecision(2) << setw(17) << cost << "\n";
    }

   void operation();
   void productName(int cd,float cst)
    {
      cout <<"Enter name of the product: ";
      gets(name);

      code = cd;
      cost = cst;
    }
   void productCode(char *ch,float cst)
    {
      cout <<"Enter code of the product: ";
      cin >> code;
      name[20] = *ch;
      cost = cst;
    }
   void productCost(int cd)
    {
     cout << "Enter price ofthe product: ";
     cin >> cost;
     code = cd;
    }

 };

  void Inventory::operation()
   {
    Inventory ob1;
    fstream ob2;
    cout << "-------------------------------------------";
    cout << "\n1. Add an item ->\n";
    cout << "2. Update an item ->\n";
    cout << "3. Details of an item ->\n";
    cout << "4. See the details of all item ->\n";
    cout << "5. Containts of updated file ->\n";
    cout << "6. See file and object details ->\n";
    cout << "7. Exit\n\n";
    cout << "-------------------------------------------\n";
    cout << "Enter your option: ";
    cin >> obt;
    ob2.open("Atom.txt",ios::ate | ios::in | ios::out | ios::binary);
    switch(obt)
     {
      case 1:
       {
		// add more Item
		cout<<"\nAdd an item \n";
		ob1.getData();
		cin.get(ch);
		ob2.write((char *)&ob1,sizeof(ob1));
		cout << "\nItem added successfully...\n";
		ob2.close();
		break;
       }
      case 2:
       {
		// modifying the details of an item.
		cout << "\nWhat you want to update: ";
		cout << "\nPress 1 -> Name of the product...";
		cout << "\nPress 2 -> Code of the product...";
		cout << "\nPress 3 -> Price of the product...";
		cout << "\nPress 4 -> TO UPDATE ALL...";
		int choice=0;
		cout << "\nEnter your choice: ";
		cin >> choice;

		cout << "\nEnter object number to be updated: ";
		cin >> object;
		if(choice==1)
		 {
		   cin.get(ch);
		   int location = (object-1)*sizeof(ob1);
		   ob2.clear();
		   cout << "\nlocation: " << location;
		   ob2.seekp(location);
		   cout << "\nRecent code: " << code;
		   ob1.productName(code,cost);

		   cin.get(ch);
		   ob2.write((char *)&ob1,sizeof(ob1)) << flush;
		   // ob1.productName(code,cost);
		   ob2.close();
		   break;
		 }

		else if(choice==2)
		 {
		   cin.get(ch);
		   int location = (object-1)*sizeof(ob1);
		   ob2.clear();
		   ob2.seekp(location);
		   ob1.productCode(name,cost);
		   cin.get(ch);
		   ob2.write((char *)&ob1,sizeof(ob1)) << flush;
		   ob2.close();
		   break;

		 }


		else if(choice==3)
		 {
		   cin.get(ch);
		   int location = (object-1)*sizeof(ob1);
		   ob2.clear();
		   ob2.seekp(location);
		   ob1.productCost(code);
		   cin.get(ch);
		   ob2.write((char *)&ob1,sizeof(ob1)) << flush;
		   ob2.close();
		   break;

		 }

		else if(choice==4)
		  {
			cin.get(ch);
			int location = (object-1)*sizeof(ob1);
			 ob2.clear();
			 ob2.seekp(location);
			 cout <<"\nEnter new values of the object: ";
			 ob1.getData();
			 cin.get(ch);
			 ob2.write((char *)&ob1,sizeof(ob1)) << flush;
			 ob2.close();
			 break;
	       }
	       else
		{
		 cout << "\nInvalid Entry...";
		 cout << "\nTry again...";
		 break;
		}
       }
      case 3:
       {
		 // see file details.




		 cout << "\nEnter an object no to see the details: ";
		 cin  >> obj;
		 cin.get(ch);
		 int location = (obj-1)*sizeof(ob1);
		 //if(ob2.eof())
		 // {
			  ob2.clear();
			  ob2.seekp(location);
			  ob2.read((char *)&ob1,sizeof(ob1));
			  ob1.putData();
			  break;
      }
     case 4:
      {
		ob2.seekg(0,ios::beg);
		cout << "Current contents of stock is: " << "\n";

		ob1.codeAlign();
		while(ob2.read((char *)&ob1,sizeof(ob1)))
		 {
		   ob1.putData();
		 }
		 cout << "----------------------------------------------\n";
		 ob2.clear();
		 break;
      }

     case 5:
      {
		//show updated file.
		ob2.seekg(0);
		cout <<"\nContaints of updated file\n";
		while(ob2.read((char *)&ob1,sizeof(ob1)))
		 {
		  ob1.putData();
		 }
		break;
      }

     case 6:
      {
		 int last = ob2.tellg();
		 int n = last/sizeof(ob1);
		 cout << "No.of objects: " << n <<"\n";
		 cout << "Total byte  in the file: " << last <<"\n";
		 break;
      }

     case 7:
      {
		cout << "\nThanks for using our Inventory... {Press enter key to logout}";
		ob2.close();
		break;
      }

      default:
       {
	cout << "\nInvalid input";
	cout << "\nOperation failed to perform...\n";
	//operation();
	break;
       }
    }

    /*
    if(obt!=7)
     {
      cout << "\n------------------------------------------\n";

     }
     */
  }


 int main()
  {
   clrscr();
   Inventory ob;
   while(obt!=7)
   {
    ob.operation();
    if(obt==7)
     {
      break;
     }
   }
   getch();
   return 0;
  }
