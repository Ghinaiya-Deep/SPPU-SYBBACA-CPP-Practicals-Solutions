/* a)	Write a C++ program to create a class Distance with data members meter and centimeter to represent distance. Write a function Larger( ) to return the larger of two distances. (Use this pointer) */


#include<iostream.h>
#include<conio.h>

class distance
{
	int meter;
	float centimeter;
	public:
		void get()
		{
			cout<<"\nEnter meter value : ";
			cin>>meter;
			cout<<"Enter centimeter : ";
			cin>>centimeter;
		}

		void put()
		{
			cout<<"\nMeter = "<<this->meter<<endl;
			cout<<"Centimeter = "<<this->centimeter;
		}

		distance larger(distance d1,distance d2)
		{
		if(d1.meter>d2.meter)
		{
		return d1;
		}
		else if(d1.meter<d2.meter)
		{
		return d2;
		}
		else
		{
		if(d1.centimeter>d2.centimeter)
		{
		return d1;
		}
		else
		{
		return d2;
		}
		}
		}
};

int main()
{

	distance d1,d2,d3;
	clrscr();
	cout<<"\nEnter First distance : ";
	d1.get();
	cout<<"\nEnter Second distance : ";
	d2.get();
	d3=d3.larger(d1,d2);
	cout<<"\n\nLarger Distance is : \n";
	d3.put();
	getch();
	return 0;
}

