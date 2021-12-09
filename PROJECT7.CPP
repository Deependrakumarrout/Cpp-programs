#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<iomanip.h>

int obt;
class Inventory
 {
  public:
   int id,yo;
   char name[30];
   int code;
   double cost;
   Inventory () {yo=1;}
   Inventory (int slNo, char *productName, int productCode, double productCost)
    {
     id = slNo;
     strcpy(name,productName);
     //name = &_name;
     //addr = &_addr;  // please research about this thing...
     //strcpy(addr,_addr);
     code = productCode;
     cost = productCost;
    }
   public:
   void getData();
   void menu();
   void showAll();
   void del(int);
   void itemDetail(int);
   void deleteFile();
   void fileDetail();
   // function overloading...
   int singleUpdate(int,char*);
   int singleUpdate(int,int);
   int singleUpdate(int,double);
   void wholeUpdate();
   void getUpdateData();
   void codeAlign()
    {
     cout << "\nSL-NO";
     cout.width(15);
     cout << "PRODUCT NAME";
     cout.width(25);
     cout << "PROD-CODE";
     cout.width(14);
     cout << "PRODUCT COST";
     cout << "\n---------------------------------------------------------\n";
    }

   /*
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

   */


   void info()
    {

     //cout <<setw(3)<< id<<setw(20)<< name <<"\t\t"<< code<<"\t\t"<< cost<<"\n";
     cout<<setw(3)<<id<<"\t"<<name<<setw(23)<<"\t"<<code<<"\t"<<cost<<"\n";
    }

 };

   // menu with switch case:
   void Inventory::menu()
    {
     cout << "---------------------------------------------------------";
     cout << "\n1 -> Add an item: \n";
     cout << "2 -> Update an item: \n";
     cout << "3 -> Details of an item: \n";
     cout << "4 -> See the details of all item: \n";
     cout << "5 -> See file and object details: \n";
     cout << "6 -> To delete the whole file: \n";
     cout << "7 -> To delete the containt of file: \n";
     cout << "8 -> Exit\n";
     cout << "---------------------------------------------------------\n";
     cout << "Enter your option: ";
     cin >> obt;


     switch(obt)
      {
       case 1:
       {
	Inventory::getData();
	break;
       }

       case 2:
	{
	 // modifying the details of an item.
	 Inventory::wholeUpdate();
	 break;
	}

       case 3:
	{
	 cout << "\nEnter an object no to see the details: ";
	 cin >> id;
	 Inventory::codeAlign();
	 Inventory::itemDetail(id);
	 break;
	}

       case 4:
	{
	 Inventory::codeAlign();
	 Inventory::showAll();
	 break;
	}

       case 5:
	{
	 Inventory::fileDetail();
	 break;
	}

       case 6:
	{
	 Inventory::deleteFile();
	 break;
	}

       case 7:
	{
	 int num;
	 cout << "Enter the Serial-Number to delete: ";
	 cin >> num;
	 codeAlign();
	 itemDetail(num);
	 del(num);
	 //arrange(num);
	 cout << "\nItem deleted successfully\n";
	 break;
	}

       case 8:
	{
	 cout << "\nThanks for using our Inventory...Press enter to logout!!!";
	 //ob2.close();
	 break;
	}

      default:
       {
	cout << "\nInvalid input";
	cout << "\nOperation failed to perform...\n";
	//break;
       }
      }
    }



   void Inventory::showAll()
    {

    //ob1.codeAlign();
    ifstream f("details.dat",ios::binary);
    double sum=0;
    //i=0;
    Inventory ob1;
    f.seekg(0,ios::beg);
    while(f.read((char *)&ob1,sizeof(ob1)))
    {
    ob1.info();
    sum = sum+ob1.cost;
    }
    f.close();

    cout << "---------------------------------------------------------\n";
    cout << "Total amount:";

    // cout.width(27);
    // cout.setf(ios::showpoint);
    // cout << /*setprecision(2)<<*/ // sum<<"\n";

    printf("                                   ");
    printf("%.2f",sum,"\n");
    cout << "\n---------------------------------------------------------\n";
    }


    void Inventory::itemDetail(int id)
     {
	// see file details.
	ifstream f("details.dat",ios::binary);
	//cin.get(ch);
	Inventory ob1;
	int location = (id-1)*sizeof(ob1);
	f.clear();
	//Here its giving the address of that particular location.
	f.seekg(location);
	f.read((char *)&ob1,sizeof(ob1));
	ob1.info();
	//cout << "\nAddress of ob1: "<< &ob1;
	f.close();
     }


    void Inventory::wholeUpdate()
     {
       cout << "\nWhat you want to update: ";
       cout << "\nPress 1 -> Name of the product...";
       cout << "\nPress 2 -> Code of the product...";
       cout << "\nPress 3 -> Price of the product...";
       cout << "\nPress 4 -> TO UPDATE ALL...";
       int choice=0;
       cout << "\nEnter your choice: ";
       cin >> choice;


       if(choice==1)
       {
	 cout << "Enter the sl-no to update: ";
	 cin >> id;
	 cout << "Enter the name you want to update: ";
	 gets(name);
	 singleUpdate(id,name);
       }


       else if(choice==2)
	{
	 cout << "Enter the sl-no to update: ";
	 cin >> id;
	 cout << "Enter the code you want to update: ";
	 cin >> code;
	 singleUpdate(id,code);
	}


	else if(choice==3)
	{
	 cout << "Enter the sl-no to update: ";
	 cin >> id;
	 cout << "Enter the cost you want to update: ";
	 cin >> cost;
	 singleUpdate(id,cost);
	}

	else if(choice==4)
	 {
	 //cin.get(ch);
	 fstream f("details.dat",ios::in|ios::out|ios::ate|ios::binary);
	 Inventory ob1;
	 int location = (id-1)*sizeof(ob1);
	 f.clear();
	 f.seekp(location);
	 cout <<"\nEnter new values of the object -> \n";
	 ob1.getUpdateData();
	 //cin.get(ch);
	 f.write((char *)&ob1,sizeof(ob1)); //<< flush;

	 f.close();
      }

      else
	{
	  cout << "\nInvalid Entry...";
	  cout << "\nTry again...";
	}

      cout << "\nContains updated successfully...\n";
      }


    //Delete the whole file:
    void Inventory::deleteFile()
     {
       cout << "\nAre you sure want to delete the file:";
	cout << "\n(Warning all CONTAINTS will be deleted)\n";
	cout << "---------------------------------------------------------\n";
	cout << "-> Press 'y' to proceed!!";
	cout << "\n-> Press 'n' to stop the deletion operation!!\n";
	cout << "---------------------------------------------------------";
	char cho;
	cout << "\nEnter your choice: ";
	cin >> cho;
	if(cho=='y')
	 {
	   remove("details.dat");
	   cout << "File deleted successfully...\n";
	   //i=0;
	 }
	else if(cho=='n')
	 {
	  cout << "File deletion operation stopped...\n";
	 }
     }

    void Inventory::fileDetail()
     {
      // The ios::ate works here to locate the file pointer.
      fstream f("details.dat",ios::ate|ios::binary|ios::in|ios::out);
      int last = f.tellg();
      //cout << "tellg: " << f.tellg()<<"\n";
      Inventory obj;
      int n = last/sizeof(obj);
      cout << "No.of objects: " << n <<"\n";
      cout << "Total byte  in the file: " << last <<"\n";
      f.close();
     }


   // creating and writing to a file.
   void create(Inventory obj)
    {
     ofstream f("details.dat",ios::binary|ios::app);
     f.write((char *)&obj,sizeof(obj));
     f.close();
    }
   /*
    // Reading to a file after creating.
    void read()
     {
      ifstream f("details.dat",ios::binary);
      Inventory obj;
      while(f.read((char *)&obj, sizeof(obj)))obj.info();
      f.close();
     }
   */
     // Update a particular item of file.
    int Inventory::singleUpdate(int id, char *name)
     {
      fstream f("details.dat", ios::in|ios::out|ios::binary);
      Inventory obj;
      int found = 0;
      while(f.read((char *)&obj,sizeof(obj)))
       {
	if(obj.id==id)
	 {
	  found = 1;
	  strcpy(obj.name, name);

	  f.seekp(f.tellg() - sizeof(obj),ios::beg);
	  f.write((char *) &obj,sizeof(obj));
	  break;
	 }
       }
       return found;
     }

 int Inventory::singleUpdate(int id, int cde)
     {
      fstream f("details.dat", ios::in|ios::out|ios::binary);
      Inventory obj;
      int found = 0;
      while(f.read((char *)&obj,sizeof(obj)))
       {
	if(obj.id==id)
	 {
	  found = 1;
	  obj.code = cde;

	  f.seekp(f.tellg() - sizeof(obj),ios::beg);
	  f.write((char *) &obj,sizeof(obj));
	  break;
	 }
       }
       return found;
     }


    int Inventory::singleUpdate(int id, double cst)
     {
      fstream f("details.dat", ios::in|ios::out|ios::binary);
      Inventory obj;
      int found = 0;
      while(f.read((char *)&obj,sizeof(obj)))
       {
	if(obj.id==id)
	 {
	  found = 1;
	  obj.cost = cst;
	  f.seekp(f.tellg() - sizeof(obj),ios::beg);
	  f.write((char *) &obj,sizeof(obj));
	  break;
	 }
       }
       return found;
     }


   // Deleting to a file.
   void Inventory::del(int id)
    {
     ifstream f("details.dat", ios::binary);
     ofstream temp("temp.dat", ios::binary);
     Inventory obj;
     int i=0;
     while(f.read((char *)&obj,sizeof(obj)))
      {
      // cout<<"\nobj.id: "<<obj.id;
      // cout<<"\nid: "<<id;
       if(obj.id!=id&&obj.id<id)  // Here we are writing all the contains into the temp file
			// except we skipped the sl.no which is input by the user.
			// Then we remain the file from temp to details.dat.
	{
	 temp.write((char *)&obj,sizeof(obj));
	}

	if(obj.id>id)
	  {
	   obj.id = id+i;
	   temp.write((char *)&obj,sizeof(obj));
	   i+=1;
	  }

      }

      f.close();
      temp.close();

      remove("details.dat");
      rename("temp.dat","details.dat");
    }


    void Inventory::getUpdateData()
     {
       cout << "\nEnter the Serial-Number to be updated: ";
       cin >> id;
       cout <<"Enter name of the product: ";
       gets(name);
       cout <<"Enter code of the product: ";
       cin >> code;
       cout <<"Enter the cost of the product: ";
       cin >> cost;

       Inventory ob1(id,name,code,cost);
     }

    void Inventory::getData()
     {
       fstream f3("details.dat",ios::ate|ios::binary|ios::in|ios::out);
       int last = f3.tellg();
       //cout << "tellg: " << f3.tellg()<<"\n";
       Inventory obj;
       int n = last/sizeof(obj);
       cout << "---------------------------------------------------------\n";
       cout << "Start the Serial-Number from: " << n+1;
       cout << "\n---------------------------------------------------------\n";
       f3.close();
       cout << "\nEnter the Serial-Number: ";
       cin >>id;
       cout <<"Enter name of the product: ";
       gets(name);
       cout <<"Enter code of the product: ";
       cin >> code;
       cout <<"Enter the cost of the product: ";
       cin >> cost;

       //Inventory obj;
       ifstream f("details.dat", ios::binary);
       fstream f1("details.dat",ios::in|ios::out|ios::ate|ios::binary);
       int i=0;
       while(f.read((char *)&obj,sizeof(obj)))
       {
	if(obj.id==id)
	 {
	i=1;
	cout << "\n---------------------------------------------------------";
	cout << "\nSL-NO is already available in Stock\n";
	cout << "\n---------------------------------------------------------";
	cout << "\nDo you really want to replace the contains:";
	cout << "\n(Warning the previous contains will be replace)\n";
	cout << "\n---------------------------------------------------------";
	cout << "\n-> Press 'y' to proceed!!";
	cout << "\n-> Press 'n' to stop the replace operation!!\n";
	cout << "---------------------------------------------------------";
	char cho;
	cout << "\nEnter your choice: ";
	cin >> cho;
	if(cho=='y')
	 {
	  Inventory ob1(id,name,code,cost);
	  int location = (id-1)*sizeof(ob1);
	  f1.clear();
	  f1.seekp(location);
	  //cout <<"\nEnter new values of the object -> \n";
	  //cin.get(ch);
	  f1.write((char *)&ob1,sizeof(ob1)); //<< flush;
	  f1.close();

	   cout << "\nContains of file replaced successfully...\n";
	   break;
	   //i=0;
	 }
	else if(cho=='n')
	 {
	  cout << "\nContains replace operation stopped...\n";
	 }

       }
    }

       if(i==0)
	{
	 Inventory ob1(id,name,code,cost);
	 create(ob1);
	 cout << "\nItem added successfully\n";
	}
    }


int main()
 {
  clrscr();
  Inventory obj;
  cout << "\n---------------------------------------------------------\n";
  cout << "PRESS A NUMBER BELOW TO PERFORM ANY TASK\n";

  while(obt!=8)
  {
   obj.menu();
   if(obt==8)
    {
     break;
    }
  }
  getch();
  return 0;
}