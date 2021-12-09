
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
#include<iomanip.h>

			// Based on tution project.
int obt,arr[10],i,j;
class Inventory
 {
  char name[30];
  int code,object,obj;
  char ch;
  double cost;
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
     cout << "\nSL-NO";
     cout.width(14);
     cout << "PRODUCT NAME";
     cout.width(15);
     cout << "PRODUCT CODE";
     cout.width(17);
     cout << "PRODUCT COST";
     cout << "\n--------------------------------------------------\n";
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
     //j=0;
     i+=1;
     arr[i]=i;
     //cout << i;
    // cout.setf(ios::showpoint);
     cout << setw(3) << arr[i] << setw(12) <<name <<setw(15) <<code <<
     setprecision(2) << setw(18) <<cost << "\n";

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
    fstream ob2("Atom.dat",ios::ate | ios::in | ios::out | ios::binary);
    ofstream ob3("temp.dat",ios::ate | ios::in | ios::out | ios::binary);

//    cout << "--------------------------------------------";
    cout << "--------------------------------------------------";
    cout << "\n1 -> Add an item: \n";
    cout << "2 -> Update an item: \n";
    cout << "3 -> Details of an item: \n";
    cout << "4 -> See the details of all item: \n";
    cout << "5 -> See file and object details: \n";
    cout << "6 -> To delete the whole file: \n";
    cout << "7 -> To delete the containt of file: \n";
    cout << "8 -> Exit\n";
    cout << "-------------------------------------------------\n";
    cout << "Enter your option: ";
    cin >> obt;

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
		i=0;
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
			 cout <<"\nEnter new values of the object -> \n";
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
		 //cin.get(ch);
		 int location = (obj-1)*sizeof(ob1);
		 ob2.clear();
		 //Here its giving the address of that particular location.
		 cout << "\nRecent location: " <<ob2.seekp(location);
		 ob2.read((char *)&ob1,sizeof(ob1));
		 ob1.putData();
		 //cout << "\nAddress of ob1: "<< &ob1;
		 break;

      }
     case 4:
      {
		ob2.seekg(0,ios::beg);
		cout << "Current contents of stock are -> " << "\n";

		ob1.codeAlign();
		double sum=0;
		i=0;
		while(ob2.read((char *)&ob1,sizeof(ob1)))
		 {
		   ob1.putData();
		   sum = sum+ob1.cost;
		 }
		 cout << "--------------------------------------------------\n";
		 cout << "Total amount:";

		// cout.width(27);
		// cout.setf(ios::showpoint);
		// cout << /*setprecision(2)<<*/ // sum<<"\n";


		 printf("                             ");
		 printf("%.2f",sum,"\n");
		 cout <<"\n--------------------------------------------------\n";
		 break;
      }

     case 5:
      {
		 int last = ob2.tellg();
		 int n = last/sizeof(ob1);
		 cout << "No.of objects: " << n <<"\n";
		 cout << "Total byte  in the file: " << last <<"\n";
		 break;
      }

     case 6:
      {

	cout << "\nAre you sure want to delete the file:";
	cout << "\n(Warning all CONTAINTS will be deleted)\n";
	cout << "--------------------------------------------------\n";
	cout << "-> Press 'y' to proceed!!";
	cout << "\n-> Press 'n' to stop the deletion operation!!\n";
	cout << "--------------------------------------------------\n";
	char cho;
	cout << "\nEnter your choice: ";
	cin >> cho;
	if(cho=='y')
	 {
	   remove("Atom.txt");
	   cout << "File deleted successfully...\n";
	   i=0;
	 }
	else if(cho=='n')
	 {
	  cout << "File deletion operation stopped...\n";
	 }
	break;
    }

     case 7:
      {
       cout << "\nEnter an object no to delete: ";
		 cin  >> obj;

		 //cin.get(ch);
		 //int location = (obj-1)*sizeof(ob1);
		 //ob2.clear();
		 // Here its giving the address of that particular location.
		 //ob2.seekp(location);
		 //cout <<"\nValue of i : " << i;
		 //cout << "\nobj : " << obj;


		 ob2.seekg(0,ios::beg);
		 i=0;
		 while(ob2.read((char *)&ob1,sizeof(ob1)))
		  {
		   i+=1;
		   arr[i]=i;
		   cout << "\narr[i]: " << arr[i];
		   cout << "\nRunning";
		   if(obj==arr[i])
		   {
		    cout << "\nInside if";
		    ob1.putData();
		    ob3.write((char *)&ob1,sizeof(ob1));
		    //cout << "\nHeart breaking";

		   }

		  }


		 //ob2.read((char *)&ob1,sizeof(ob1));
		 //ob1.putData();




		 remove("Atom.txt");
		 rename("temp.txt", "Atom.txt");

		 ob2.close();
		 ob3.close();

		 //ob1.putData();
		 //delete io;
		 //cout << "\nAddress of ob1: "<< &ob1;



      /*
	// ofstream ofs;
	// ofs.open("temp.dat",ios::out | ios::binary);
	 cout << "\nEnter an object number that you want to delete: ";
		 cin >> obj;
		 cin.get(ch);
		 // printf("\nAddress of ob1: %u",&ob1);
		 // obj++;
		 int location=(obj-1)*sizeof(ob1);
		 ob2.seekp(location,ios::beg);

		 //ob2.write((char *)&ob1,sizeof(ob1));

		 // cout <<"The deleted record is: \n";
		 // printf("\nAddress of s:%u",s);
		 // ob2.clear();
		//  ob1.putData();


		//}
		// ofs.close();
		  //ob2.close();
      */

		 //remove("Atom.txt");
		 //rename("temp.txt", "Atom.txt");
		 cout << "File deleted successfully...\n";
		 break;
      }


     case 8:
      {
		cout << "\nThanks for using our Inventory... {Press enter to logout}";
		ob2.close();
		break;
      }

      default:
       {
	cout << "\nInvalid input";
	cout << "\nOperation failed to perform...\n";
	operation();
	//break;
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
   cout << "\n--------------------------------------------------\n";
   cout << "PRESS A NUMBER BELOW TO PERFORM ANY TASK\n";
   while(obt!=8)
   {
    ob.operation();
    if(obt==8)
     {
      break;
     }

   }

   getch();
   return 0;
  }
