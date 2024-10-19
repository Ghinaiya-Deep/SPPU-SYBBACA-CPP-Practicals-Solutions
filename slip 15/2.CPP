/*  b)	Write a C++ class Seller (S Name, Product name, Sales Quantity, Target Quantity, Month, Commission). Each salesman deals with a separate product and is assigned a target for a month. At the end of the month his monthly sales is compared with target and commission is calculated as follows:
•	If Sales Quantity>Target Quantity then commission is 25% of extra sales made + 10% of target.
•	If Sales Quantity = Target Quantity then commission is 	of target.
•	Otherwise commission is zero.
Display salesman information along with commission obtained. (Use array of objects)
*/




#include<iostream.h>
#include<conio.h>
#include<string.h>

class seller
{
	char sname[20],pname[20];
	int squantity,target;
	float commission;
	public:
		void get()
		{
			cout<<"\nEnter salesman name : ";
			cin>>sname;

			cout<<"\nEnter product name : ";
			cin>>pname;

			cout<<"\nEnter sales quantity : ";
			cin>>squantity;

			cout<<"\nEnter target : ";
			cin>>target;
		}

		void put()
		{
			cout<<"\n\nSalesman name : "<<sname;
			cout<<"\nProduct name : "<<pname;
			cout<<"\nSales quantity : "<<squantity;
			cout<<"\nTarget : "<<target;
			commission=0;
			if(squantity>target)
			{
				commission=commission+((squantity-target)*0.25)+(target*0.10);
			}

			else if(target==squantity)
			{
				commission=commission+(target*0.10);
			}
			else
			{
				commission=0;
			}
			cout<<"\nCommission : "<<commission;
		}
};

void main()
{
	seller sman[10];
	int i,n;
	clrscr();
	cout<<"\nEnter how many salesman : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
	sman[i].get();
	}
	for(i=0;i<n;i++)
	{
	sman[i].put();
	}
	getch();
}
