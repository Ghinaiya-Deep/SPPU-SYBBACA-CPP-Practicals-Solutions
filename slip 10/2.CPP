/*
Create a C++ class City with data members City code, City name, population.
Write necessary member  functions for the following:
i. Accept details of n cities
ii. Display details of n cities in ascending order of population.
iii. Display details of a particular city.
(Use Array of object and to display city information use manipulators.)
*/

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>

void searchcity();
char n[10],c[10];

class city
{
	public:
		int population,city_code;
		char name[40],e[10];

		void accept()
		{
		cout<<"\nEnter name of city : ";
		cin>>name;
		cout<<"Enter city code : ";
		cin>>city_code;
		cout<<"Enter Population of city : ";
		cin>>population;
		}

		void sort(city &r1,city &r2)
		{
		city temp;
		if(r1.population>r2.population)
		{
		temp=r1;
		r1=r2;
		r2=temp;
		}
		}

		void display()
		{
		cout<<"\n\nName of city : "<<name<<endl;
		cout<<"Population : "<<population<<endl;
		cout<<"City code : "<<city_code;
		}

		void searchcity()
		{
		if(strcmp(name,c)==0)
		{
		cout<<"\n\nName : "<<name;
		cout<<"\nPopulation : "<<population;
		}
		}
};

void main()
{
clrscr();
city t[30];
int num,ch,population,i,j;
char cont;
cout<<"\n1.Accept and Display";
cout<<"\n2.Ascending";
cout<<"\n3.Search by City";
do
{
cout<<"\nEnter Your Choice : ";
cin>>ch;
switch(ch)
{
	case 1:
		cout<<"\nHow many records you want to insert : ";
		cin>>num;
		for(i=0;i<num;i++)
		{
		t[i].accept();
		}
		for(i=0;i<num;i++)
		{
		t[i].display();
		}
		break;


	case 2:
		for(i=0;i<num;i++)
		{
		for(j=i+1;j<num;j++)
		{
		t[i].sort(t[i],t[j]);
		}
		t[i].display();
		}
		break;

	case 3:
		cout<<"\nEnter city name : ";
		cin>>c;
		for(i=0;i<num;i++)
		{
		t[i].searchcity();
		}
		break;
}

	cout<<"\nDo you want to continue : ";
	cin>>cont;
	}
	while(cont=='Y' || cont=='y');
	getch();
	}












