#include <iostream>
using namespace std;

int main()
{
          int cn, units;
          char name[25];
          float bill;
                 cout<<"Enter Customer No. : ";
                 cin>>cn;
                 cout<<"\nEnter Customer Name : ";
                 cin>>name;
                 cout<<"\nEnter No. of Units used : ";
                 cin>>units;
                        if(units<=50)
            	{
            		bill=0.5*units;
            	}
            	else if(units<=150)
            	{
            		bill=((units-50)*0.75)+(50*0.5);
            	}
            	else if(units<=250)
            	{
            		bill=(50*0.5)+(100*0.75)*((units-150)*1.20);
            	}
            	else if(units>250)
            	{
            		bill=50*0.5+100*0.75+100*1.20+(units-250)*1.50;
            	}
            cout << "\nCustomer number : " << cn;
            cout << "\nCustomer name : " << name;
	cout << "\nUnits consumed : " << units;
	cout << " \nBill=" << bill;
}
