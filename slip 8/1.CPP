/* Write a C++ program create a class Number,
which contain static data member 'cnt' and member function '
Display()'. Display() should print number of times display
operation is performed irrespective of the object responsible
for calling Display().  */

#include<iostream.h>
#include<conio.h>

class number
{
	public:
		void display()
		{
		static int cnt=1;
		cout<<"\nDisplay Function is called "<< cnt << " times " <<endl;
		cnt++;
		}
};

int main()
{
number n1,n2;
clrscr();
n1.display();
n1.display();
n2.display();
n2.display();
getch();
return 0;
}