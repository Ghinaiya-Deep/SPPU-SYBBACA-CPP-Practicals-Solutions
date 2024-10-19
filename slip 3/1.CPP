/* write c++ program to interchange values of two integer numbers.
(use call by refernce) */

#include<iostream.h>
#include<conio.h>

void swap(int &,int &);
int main()
{
int a,b;
clrscr();
cout<<"Enter value of a : ";
cin>>a;
cout<<"Enter value of b : ";
cin>>b;

cout<<"\nBefore Swapping value is : ";
cout<<"\n\tA = " << a << "\n\tB = " << b << endl;

swap(a,b);
cout<<"\nOutside Function after swapping value is : ";
cout<<"\n\tA = " << a << "\n\tB = " << b << endl;

getch();
return 0;
}


void swap(int &a,int &b)
{
int c;
c=a;
a=b;
b=c;
cout<<"\nInside function after swapping value is : ";
cout<<"\n\tA = " << a << "\n\tB = " << b << endl;
}