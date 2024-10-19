/*
b)	Create a C++ class Time with data members Hours, Minutes and Seconds. Write necessary member  functions for the following: (Use Objects as arguments)
i.	To accept a time.
ii.	To display a time In format hh:mm:ss.
iii.	To find difference between two time and display it in format hh:mm:ss.
*/

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class time
{
	int h,m,s;
	public:
		void get();
		void display();
		time operator -(time t2);
};

void time::get()
{
	cout<<"\nEnter Hour, Minutes and Seconds : ";
	cin>>h>>m>>s;
}

void time::display()
{
	cout<<"\n----Time is----"<<setfill('0')<<setw(2)<<h;
	cout<<":"<<setfill('0')<<setw(2)<<m;
	cout<<":"<<setfill('0')<<setw(2)<<s<<endl;
}

time time::operator -(time t2)
{
	time t;
	t.h=h-t2.h;
	t.m=m-t2.m;
	t.s=s-t2.s;
	return t;
}

void main()
{
clrscr();
time t1,t2,t3;
t1.get();
t1.display();
t2.get();
t2.display();
t3=t1-t2;
cout<<"\nTime1-Time2:\n";
t3.display();
getch();
}