/* b)	Create a C++ class Cuboid with data members length, breadth, and height. Write necessary member  functions for the following:
 1. void setvalues(float,float,float) to set values of data members.
2. void getvalues( ) to display values of data members.
3. float volume( ) to calculate and return the volume of cuboid.
4. float surface area( ) to calculate and return the surface area of cuboid.
	(Use Inline function)
*/
#include<iostream.h>
#include<conio.h>

class cuboid
{
	float len,bre,hei;
	public:
		void getdata()
		{
			cout<<"\nEnter Length,Breadth and Heigth of cuboid : \n";
			cin>>len>>bre>>hei;
		}

		void setdata()
		{
			cout<<len<<bre<<hei;
		}

		inline void volume()
		{
			cout<<"\nThe Volume of cuboid is : "<<len*bre*hei;
		}

		inline void surface_area()
		{
			cout<<"\nThe Surface area of cuboid is : "<<(2*len*bre + 2*bre*hei + 2*len*hei);
		}
};

void main()
{
	clrscr();
	cuboid c;
	c.getdata();
	c.volume();
	c.surface_area();
	getch();
}