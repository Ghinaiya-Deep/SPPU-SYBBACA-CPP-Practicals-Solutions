
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class point
{
	int x,y;
	public:
		void get()
		{
			cout<<"\nEnter 2-Dimesniaonal point : ";
			cin>>x>>y;
		}

		void put()
		{
			cout<<"x= "<<x<<"\t"<<"y= "<<y<<endl;
		}

		point operator+(point &t)
		{
			point tp;
			tp.x=x+t.x;
			tp.y=y+t.y;
			return tp;
		}

		void operator-()
		{
			x=-x;
			y=-y;
			put();
		}

		void operator*()
		{
			int n;
			cout<<"\nEnter value of n : ";
			cin>>n;
			x=-x;
			y=-y;
			x=x*n;
			y=y*n;
			put();
		}
};

int main()
{
	point p1,p2,p3;
	int ch;
	clrscr();
	p1.get();
	p2.get();
	cout<<"\nFirst 1-dimensional point : ";
	p1.put();
	cout<<"\nSecond 2-dimensional point : ";
	p2.put();

	do
	{
		cout<<"\n1.Addition";
		cout<<"\n2.Negates coordinates of point";
		cout<<"\n3.Multiplication of coordinates by constant n";
		cout<<"\n4.Exit";
		cout<<"\n\nEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				p3=p1+p2;
				cout<<"\nAddition of point is : ";
				p3.put();
				break;

			case 2:
				cout<<"\nNegates of point is : ";
				-p1;
				break;

			case 3:
				*p1;
				break;

			case 4:
				exit(0);
		}
	}while(ch!=4);
	getch();
	return 0;
}