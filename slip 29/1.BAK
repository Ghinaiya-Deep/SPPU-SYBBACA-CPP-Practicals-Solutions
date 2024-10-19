#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class bill
{
	int unit,amt,mid;
	char name[20];
	public:
		void get();
		void charge();
		void put();
};

void bill::get()
{
	cout<<"\nEnter meter id : ";
	cin>>mid;
	cout<<"\nEnter customer name : ";
	cin>>name;
	cout<<"\nEnter units : ";
	cin>>unit;
}

void bill::charge()
{
	if(unit<=100)
		{
			amt=150+(unit*1);
		}
	else if((unit>100)&&(unit<=300))
		{
			amt=150+(unit*2);
		}
	else
		{
			amt=150+(unit*3);
		}

	if(amt<150)
		{
			amt=150;
		}

	else if(amt>250)
		{
			amt=amt+(amt*15/100);
		}
}

void bill::put()
{
	cout<<"\nMeter id : "<<mid;
	cout<<"\nCustomer name : "<<name;
	cout<<"\nUnits is : "<<unit;
	cout<<"\nTotal charges is : "<<amt;
}

int main()
{
	bill b[10];
	clrscr();
	int i,n;
	cout<<"\nEnter number of record : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
	b[i].get();
	}

	cout<<"\nCalculation is : ";
	for(i=0;i<n;i++)
	{
	b[i].charge();
	b[i].put();
	}
	getch();
	return 0;
}
