
/* a)	Write a C++ program to create a class Machine with data members Machine Id, Machine Name, Price. Create and initialize all values of Machine object by usmg parameterized constructor and copy constructor. Display details of Machine using setw( ) and setprecision( ).   */


#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>

class machine
{
	private:
		int machine_id,price;
		char name[20];
		public:
			//parameterized constructor
			machine(int x1,int y1,char *z1)
			{
				strcpy(name,z1);
				machine_id=x1;
				price=y1;
			}

			//copy constructor
			machine(const machine &same)
			{
				strcpy(name,same.name);
				machine_id=same.machine_id;
				price=same.price;
			}

			void display()
			{
				cout<<"\nName : "<<name;
				cout<<"\nMachine id : "<<setprecision(2)<<machine_id;
				cout<<"\nPrice : "<<setw(3)<<price;
			}
};

int main()
{
	clrscr();
	machine o1(13,345,"deep"); //normal or parameterised constructor
	machine o2=o1; //copy constructor
	cout<<"\n\nNormal constructor : ";
	o1.display();
	cout<<"\n\nCopy constructor : ";
	o2.display();
	getch();
	return 0;
}
