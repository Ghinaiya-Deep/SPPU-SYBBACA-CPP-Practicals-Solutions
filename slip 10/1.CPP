/* 
Write a C++ program to create a class Account with data members
 Acc number, Acc type and Balance.
Write member functions to accept and display 'n' account details.
(Use dynamic memory allocation)
*/

#include<iostream.h>
#include<conio.h>

class account
{
public:
	int acc_no,balance;
	char acc_type[30];

public:
	account()
	{
	cout<<"Constructor"<<endl;
	}

	~account()
	{
	cout<<"Destructor"<<endl;
	}

	void get()
	{
	cout<<"\nEnter Account no : ";
	cin>>acc_no;
	cout<<"Enter Account Type : ";
	cin>>acc_type;
	cout<<"Enter Balance : ";
	cin>>balance;
	}

	void display()
	{
	cout<<"\n\nAccount No : "<<acc_no;
	cout<<"\nAccount Type : "<<acc_type;
	cout<<"\nBalance : "<<balance;
	}
};

int main()
{
clrscr();
int num,i;
account *a=new account[4];
delete []a; //delete array
cout<<"\nHow many Records You Want : ";
cin>>num;
for(i=0;i<num;i++)
{
a[i].get();
}
for(i=0;i<num;i++)
{
a[i].display();
}
getch();
return 0;
}