/* b)	Create a C++ class MyMatrix and Write necessary member functions for the following:
i. To accept a Matrix
 ii. To display a Matrix 
iii. Overload unary '-' operator to calculate transpose of a Matrix.
iv. Overload unary operator to increment matrix elements by I
*/




#include<iostream.h>
#include<string.h>
#include<conio.h>

class mystring
{
	int a[3][3],i,j;
	public:
		void get();
		void put();
		void operator-();
		void operator++();
};

void mystring::get()
{
	int i,j;
	cout<<"\nEnter matrix elements : \n";
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	cin>>a[i][j];
	}
	}
}

void mystring::put()
{
	int i,j;
	cout<<"\nMatrix is : \n";
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	cout<<a[i][j];
	cout<<"\t";
	}
	}
}

void mystring::operator-()
{
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	a[i][j]=-a[i][j];
	}
	}
}

void mystring::operator++()
{
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	a[i][j]=++a[i][j];
	}
	}
}

int main()
{
	mystring m1;
	clrscr();
	cout<<"\nEnter matrix value ";
	m1.get();
	m1.put();
	-m1;
	cout<<"\nAfter negetion matrix : \n";
	m1.put();
	++m1;
	cout<<"\nAfter increment : \n";
	m1.put();
	m1++;
	m1.put();
	getch();
	return 0;
}