
#include<iostream.h>
#include<conio.h>

class complex
{
	public:
		int real,imag;
		void setvalue()
		{
			cin>>real;
			cin>>imag;
		}

		void display()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}

		void sum(complex c1,complex c2)
		{
			real=c1.real+c2.real;
			imag=c1.imag+c2.imag;
		}
};

int main()
{
	complex c1,c2,c3;
	clrscr();
	cout<<"\nEnter real and imaginary first complex number : ";
	c1.setvalue();
	cout<<"\nEnter real and imaginary second complex number : ";
	c2.setvalue();
	cout<<"\nSum of two complex number is : ";
	c3.sum(c1,c2);
	c3.display();
	getch();
	return 0;
}