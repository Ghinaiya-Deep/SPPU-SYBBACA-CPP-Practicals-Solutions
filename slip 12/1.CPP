/* a)	Write a C++ program to create a class Date with data members day, month, and year. Use default and parameterized constructor to initialize date and display date in dd-Mon-yyyy format. (Example: Input: 04-01-2021 Output: 04-Jan-2021)  */


#include<iostream.h>
#include<conio.h>

class date
{
	int dd,mm,yy;
	public:
		date(int d,int m,int y)
		{
			dd=d;
			mm=m;
			yy=y;
		}

		void display()
		{
			cout<<"\n---Given Date---\n";
			cout<<dd<<"-"<<mm<<"-"<<yy;
			cout<<"\n\nAfter formating date is :";

			switch(mm)
			{
				case 1:
					cout<<"\n"<<dd<<"-Jan-"<<yy;
					break;

				case 2:
					cout<<"\n"<<dd<<"-Feb-"<<yy;
					break;
				case 3:
					cout<<"\n"<<dd<<"-Mar-"<<yy;
					break;

				case 4:
					cout<<"\n"<<dd<<"-Apr-"<<yy;
					break;

				case 5:
					cout<<"\n"<<dd<<"-May-"<<yy;
					break;


				case 6:
					cout<<"\n"<<dd<<"-Jun-"<<yy;
					break;

				case 7:
					cout<<"\n"<<dd<<"-Jul-"<<yy;
					break;

				case 8:
					cout<<"\n"<<dd<<"-Aug-"<<yy;
					break;

				case 9:
					cout<<"\n"<<dd<<"-Sep-"<<yy;
					break;

				case 10:
					cout<<"\n"<<dd<<"-Oct-"<<yy;
					break;

				case 11:
					cout<<"\n"<<dd<<"-Nov-"<<yy;
					break;

				case 12:
					cout<<"\n"<<dd<<"-Dec-"<<yy;
					break;

				default:
					cout<<"\nInvalid month";
			}
		}
	};

int main()
{
int m,dt,y;
clrscr();
cout<<"\nEnter date : ";
cin>>dt;
cout<<"\nEnter month : ";
cin>>m;
cout<<"\nEnter year : ";
cin>>y;
date d(dt,m,y);
d.display();
getch();
return 0;
}
