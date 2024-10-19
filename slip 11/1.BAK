/* create a c++ class myarray, which contains single dimensional arrayof 
given size. write a memeber function to display sum of given array elements.(use dynamic constructor and destructor).  */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>



class MyArray
{
	int size,*ptr,*p;

	public:
		MyArray(int no)
		{
			size=no;
			int i;
			ptr=new int[size];
			for(i=0;i<size;i++)
			{
				cout<<"\nEnter elements : \n";
				cin>>ptr[i];
			}
		}

		void display()
		{
			int i;
			cout<<"\nElements are :\n";
			for(i=0;i<size;i++)
			{
				cout<<ptr[i]<<"\t";
			}

		}

		void calculatesum()
		{
			int arr[10];
			int i,sum=0;
			cout<<"\nEnter 10 array elements : \n";
			for(i=0;i<10;i++)
			{
				cin>>arr[i];
				sum=sum+arr[i];
			}
			cout<<"\nThe array elements are :\n";
			for(i=0;i<10;i++)
			{
				cout<<arr[i]<<"\t";
			}
			cout<<"\n\nSum of all elements are : "<<sum;
		}

		~MyArray()
		{
			delete ptr;
		}
};

void main()
{
	int n;
	clrscr();
	cout<<"\nEnter size : ";
	cin>>n;
	MyArray d(n);
	d.display();
	d.calculatesum();
	getch();
}