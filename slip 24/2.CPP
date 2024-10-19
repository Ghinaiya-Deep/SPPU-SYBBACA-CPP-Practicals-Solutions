#include<iostream.h>
#include<conio.h>
#include<string.h>

class invoicebill
{
	int oid,no_of_products;
	int quantity[10],price[10],k;
	char name[10],pname[10][10];
	public:
	void getdata()
	{
		cout<<"\nEnter Customer name : ";
		cin>>name;
		cout<<"Enter order id : ";
		cin>>oid;
		cout<<"Enter No of products : ";
		cin>>no_of_products;
		for(k=0;k<no_of_products;k++)
		{
			cout<<"\nEnter product name : ";
			cin>>pname[k];
			cout<<"Enter quantity : ";
			cin>>quantity[k];
			cout<<"Enter price : ";
			cin>>price[k];
		}
	}

	void display()
	{
		cout<<"\nOrder Id : "<<oid;
		cout<<"\nCustomer name : "<<name;
		cout<<"Number of products : "<<no_of_products;
		for(k=0;k<no_of_products;k++)
		{
			cout<<"\nProduct name : "<<pname[k];
			cout<<"\nQuantity : "<<quantity[k];
			cout<<"\nPrice : "<<price[k];
		}
	}

	void calculate()
	{
		int total=0;
		for(k=0;k<no_of_products;k++)
		{
			cout<<"\n\nBill "<<quantity[k]*price[k];
			total=total+quantity[k]*price[k];
		}
		cout<<"\nTotal Amount : "<<total;
	}
};

const int size=2;

void main()
{
	clrscr();
	invoicebill *p=new invoicebill[10];
	invoicebill s[10];
	int i,n;
	cout<<"\nEnter number of records : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		p[i].getdata();
	}

	for(i=0;i<n;i++)
	{
		p[i].display();
	}

	for(i=0;i<n;i++)
	{
		p[i].calculate();
	}
	getch();
}

