/* class Point
{
int x,y;
 public:	
void setpoint(int, int);	// To set the values of x and y co-ordinate.
void showpoint();	// To display co-ordinate of a point P in format (x, y).
};  */

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class point
{
	int x,y;
		public:
			void setpoint(int a,int b)
			{
			x=a;
			y=b;
			}

			void showpoint()
			{
			cout<<"("<<x<<","<<y<<")";
			}
};

int main()
{
int a,b;
clrscr();
point p;

cout<<"\nEnter Co-Ordinates : ";
cout<<"\nEnter X : ";
cin>>a;
cout<<"Enter Y : ";
cin>>b;
p.setpoint(a,b);
p.showpoint();
getch();
return 0;
}