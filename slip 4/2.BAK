/* Write a C++ program to create a base class Employee (Emp-code, name, salary). Derive two classes as Fulltime (daily wages, number of days) and Parttime (number of working hours, hourly wages). Write a menu driven program to perform following functions:
l. Accept the details of 'n' employees and calculate the salary.
2.	Display the details of 'n' employees.
3.	Display the details of employee having
 maximum salary for both types of employees.   */

 #include<iostream.h>
 #include<conio.h>
 const int m=50;

 class emp
 {
	public:
		int empcode;
		char empname[30];
		int salary;
	public:
		void get()
		{
		cout<<"Enter Employee No. : ";
		cin>>empcode;
		cout<<"Enter Employee Name : ";
		cin>>empname;
		}
 };

 class fulltime:public emp
 {
	public:
		float daily_wages;
		int no_of_days;

	public:
		void getdata()
		{
		cout<<"Enter Daily Rate : ";
		cin>>daily_wages;
		cout<<"Enter No. Of Days : ";
		cin>>no_of_days;
		}

		void cal()
		{
		salary=daily_wages*no_of_days;
		cout<<"\nSalary : " <<salary;
		}

		void show()
		{
		cout<<"\n\nEmployee Number : "<<empcode;
		cout<<"\nEmployee Name : "<<empname;
		cout<<"\nSalary : " <<salary;
		cout<<"\nStatus : Full Time";
		}
 };

 class parttime:public emp
 {
	public:
		int hourly_wages;
		int working_hours;
	public:
		void get1()
		{
		cout<<"\nEnter Hourly Rate : ";
		cin>>hourly_wages;
		cout<<"\nEnter Working Hours : ";
		cin>>working_hours;
		}

		void call()
		{
		salary=hourly_wages*working_hours;
		cout<<"\nSalary : " <<salary;
		}

		void show1()
		{
		cout<<"\n\nEmployee No : "<<empcode;
		cout<<"\nEmployee Name : "<<empname;
		cout<<"\nSalary : "<<salary;
		cout<<"\nStatus : Part Time";
		}
 };

 int main()
 {
 int const cnt=5;
 int var=0;
 int var1=0;
 fulltime f1[cnt];
 parttime p1[cnt];

 int ch,i;
 clrscr();
 do
 {
	cout<<"\n1.Enter Record";
	cout<<"\n2.Display Record";
	cout<<"\n3.search Record";
	cout<<"\n4.Quit";
	cout<<"\n\nEnter Your Choice : ";
	cin>>ch;
	switch(ch)
	{
	case 1:
		int y;
		cout<<"1.Fulltime Employee";
		cout<<"2.Parttime Employee";
		cout<<"\nEnter Choice : ";
		cin>>y;
		switch(y)
		{
			case 1:
				f1[var].get();
				f1[var].getdata();
				f1[var].cal();
				var++;
				break;

			case 2:
				p1[var1].get();
				p1[var1].get1();
				p1[var1].call();
				var1++;
				break;
		}

		case 2:
			for(i=0;i<var;i++)
			{
			f1[i].show();
			}
			for(i=0;i<var1;i++)
			{
			p1[var1].show1();
			}
			break;

		case 3:
			int a;
			cout<<"\nEnter Employee No : ";
			cin>>a;
			for(i=0;i<var;i++)
			{
			if(f1[i].empcode==a)
			{
			f1[i].show();
			}

			if(p1[i].empcode==a)
			{
			p1[i].show1();
			}
			}
		}
	}while(ch!=4);
 getch();
 return 0;
 }


