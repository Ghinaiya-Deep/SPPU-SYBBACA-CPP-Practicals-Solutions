/*a)	Write a C++ program to accept radius of a Circle. Calculate and display diameter, circumference as well as area of a Circle. (Use Inline function)
*/



#include<iostream.h>
#include<conio.h>

inline float diameter(float r)
{
	return(r/2);
}

inline float circlearea(float r)
{
	return(3.14*r*r);
}

inline float circumeference(float r)
{
	return(3.14*2*r);
}

int main()
{
	float radius;
	clrscr();
	cout<<"\nEnter Radius of circle : ";
	cin>>radius;
	cout<<"\n\nDiameter of circle : "<<diameter(radius);
	cout<<"\nArea of circle : "<<circlearea(radius);
	cout<<"\nCircumeference of circle : "<<circumeference(radius);
	getch();
	return 0;
}