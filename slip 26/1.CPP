#include<iostream.h>
#include<conio.h>

int avg(int n1,int n2,int n3)
{
	int ans;
	ans=(n1+n2+n3)/3;
	return ans;
}

float avg(float n1,float n2,float n3)
{
	float ans;
	ans=(n1+n2+n3)/3;
	return ans;
}

int main()
{
	float fn1,fn2,fn3,favg;
	int in1,in2,in3,iavg;
	clrscr();
	cout<<"\nEnter three float number : \n";
	cin>>fn1>>fn2>>fn3;
	cout<<"\nEnter three integer number : \n";
	cin>>in1>>in2>>in3;
	favg=avg(fn1,fn2,fn3);
	iavg=(in1,in2,in3);
	cout<<"\n\nAverage of float is : "<<favg;
	cout<<"\n\nAverage of integer is : "<<iavg<<endl;
	getch();
	return 0;
}

