/* a)	Create a C++ class Fraction with data members Numerator and Denominator. Write a C++ program to calculate and display sum of two fractions. (Use Constructor)   */


#include<iostream.h>
#include<conio.h>

class fraction
{
	int num,dnm;
	public:
		fraction(){}
		fraction(int n,int d)
		{
			num=n;
			dnm=d;
		}
		void operator+(fraction);
};

void fraction::operator+(fraction f2)
{
	cout<<"\nAddiiton : ";
	num=num*f2.dnm+f2.num*dnm;
	dnm=dnm*f2.dnm;
	cout<<num<<"\\"<<dnm;
}

int main()
{
	int n1,d1,n2,d2;
	clrscr();
	cout<<"\nEnter first fraction : ";
	cin>>n1>>d1;
	cout<<"\nsecond second fraction : ";
	cin>>n2>>d2;

	fraction f1(n1,d1);
	fraction f2(n2,d2);
	fraction f3;
	f1+f2;
	getch();
	return 0;
}