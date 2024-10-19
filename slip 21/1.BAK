

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class employee
{
	char ename[10],cname[10];
	int empid,salary;
	public:
		void accept()
		{
			cout<<"\nEnter employee id : ";
			cin>>empid;
			cout<<"Enter employee name : ";
			cin>>ename;
			cout<<"Enter company name : ";
			cin>>cname;
			cout<<"Enter salary : ";
			cin>>salary;
		}

		void display()
		{
			cout<<"\n\nEmployee Id : "<<empid;
			cout<<"\nEmployee Name : "<<ename;
			cout<<"\nCompany Name : "<<cname;
			cout.width(7);
			cout.fill('*');
			cout.right;
			cout<<"\nSalary : "<<setw(7)<<salary;
		}
};

int main()
{
	employee *e;
	int i,n;
	clrscr();
	cout<<"\nEnter number of employee : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		e[i].accept();
	}

	for(i=0;i<n;i++)
	{
		e[i].display();
	}

	getch();
	return 0;
}


