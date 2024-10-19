

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
template <class T>
class calculator
{
	private:
		T num1;
	public:
	calculator(T n1)
	{
		num1=n1;
	}

	void display()
	{
		cout<<"\nNumbers are : "<<num1;
		cout<<"\nSquare is : "<<square()<<endl;
		cout<<"Cube is : "<<cube()<<endl;
	}

	T square()
	{
		return num1*num1;
	}

	T cube()
	{
		return num1*num1*num1;
	}
};

int main()
{
	clrscr();
	calculator<int> intcal(2);
	calculator<float> floatcal(3.1);

	cout<<"\nInt result : ";
	intcal.display();
	cout<<"\n\nFloat result : ";
	floatcal.display();
	getch();
	return 0;
}