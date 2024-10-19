/* Create a C++ base class Shape.
Derive three different classes Circle, Sphere and Cylinder from shape class.
Write a C++ program to calculate area of Circle, Sphere and
Cylinder. (Use pure virtual function).
*/

#include<iostream.h>
#include<conio.h>

class shape
{
	public:
		virtual void area()=0;
};

class circle:public shape
{
	float r;
	public:
		void area()
		{
		cout<<"Enter Radius of Circle : " ;
		cin>>r;
		cout<<"Area of circle is : "<<(3.14*r*r);
		}
};

class sphere:public shape
{
	float r;
	public:
		void area()
		{
		cout<<"\nEnter Radius of Sphere : ";
		cin>>r;
		cout<<"Area of Sphere is : "<<(4*3.14*r*r);
		}
};

class cylinder:public shape
{
	float r,h;
	public:
		void area()
		{
		cout<<"\nEnter Radius of Cylinder : ";
		cin>>r;
		cout<<"Enter Height of Cylinder : ";
		cin>>h;
		cout<<"\nArea of Cylinder is : "<<(2*3.14*r*h + 2*3.14*r*r);
		}
};

int main()
{
clrscr();
circle c;
c.area();
cout<<endl;

sphere s;
s.area();
cout<<endl;

cylinder cyli;
cyli.area();
cout<<endl;

getch();
return 0;
}
