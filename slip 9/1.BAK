/*
 class Person
{
 char Name [20]; 
charAddr [30]; 
float Salary; 
float tax amount; 
public:
 // member functions
};

Calculate tax amount by checking salary of a person
•	For salary < 20000	tax rate=0
•	For salary tax rate= 5% of salary.
•	For salary >40000	tax rate =10% of salary.

*/

#include<iostream.h>
#include<conio.h>

class person
{
	char name[20];
	char addr[20];
	float sal,tax;
	public:
		void get()
		{
		cout<<"Enter Name : ";
		cin>>name;
		cout<<"Enter Address : ";
		cin>>addr;
		cout<<"Enter Salary : ";
		cin>>sal;
		}

		void put()
		{
		cout<<"\n\n-----Person information-----";
		cout<<"\nPerson Name : "<<name;
		cout<<"\nPerson Address : "<<addr;
		cout<<"\nPerson Salary : "<<sal;
		cout<<"\nTax is : "<<tax;
		}

		void cal_tax()
		{
		if(sal<=20000)
		{
		tax=0;
		}
		else if(sal>20000 || sal<=40000)
		{
		tax=(sal*5)/100;
		}
		else if(sal>40000)
		{
		tax=(sal*10)/100;
		}
		}
};

void main()
{
person p;
clrscr();
p.get();
p.cal_tax();
p.put();
getch();
}
