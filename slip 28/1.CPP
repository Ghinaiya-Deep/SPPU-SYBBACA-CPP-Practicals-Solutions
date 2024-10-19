#include<iostream.h>
#include<conio.h>

int main()
{
	int i,n;
	clrscr();

	cout<<"\nEnter number of array elements : ";
	cin>>n;
	int *arr=new int(n);
	cout<<"Enter " << n << " items "<<"\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cout<<"\nOriginal array is : \n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}

	cout<<"\n\nReverse array is : \n";
	for(i=n-1;i>=0;i--)
	{
		cout<<arr[i]<<"\t";
	}
	getch();
	return 0;
}