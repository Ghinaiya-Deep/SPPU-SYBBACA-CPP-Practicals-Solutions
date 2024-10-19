#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

class visitingstaff
{
	char name[10];
	int total_sub;
	char sub_name[10][10];
	int wh,i;
	public:
		void getdata()
		{
			cout<<"\nEnter name : ";
			cin>>name;
			cout<<"Enter number of subjects : ";
			cin>>total_sub;
			for(i=0;i<total_sub;i++)
			{
				cout<<"\nEnter subject name : ";
				cin>>sub_name[i];
			}
			cout<<"Enter working hour : ";
			cin>>wh;
		}

		void display()
		{
			int i;
			cout<<"\nStudent name : "<<name;
			cout<<"\nTotal subjects : "<<total_sub;
			for(i=0;i<total_sub;i++)
			{
				cout<<"\nsubject name : "<<sub_name[i];
			}
			cout<<"\nWorking hours : "<<wh;
		}

		void calculate(int rate=300)
		{
			cout<<"\nsalary of visiting staff : "<<wh*rate;
		}
};

void main()
{
	clrscr();
	visitingstaff s[10];
	int i,n;
	cout<<"\nEnter number of records : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
	s[i].getdata();
	}
	for(i=0;i<n;i++)
	{
	s[i].display();
	}

	for(i=0;i<n;i++)
	{
	s[i].calculate();
	}
	getch();
}
