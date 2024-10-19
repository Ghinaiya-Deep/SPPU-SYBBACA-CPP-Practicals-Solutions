/* Create a C++ class Person with data members Person name,
Mobile number, Age, City.
Write necessary member functions for the following:
i.	Search the mobile number of given person.
ii.	Search the person name of given mobile number.
iii. Search all person details of given city.
	(Use function overloading)
*/

#include<iostream.h>
#include<conio.h>
#include<string.h>

class person
{
	public:
		int mob;
		char name[10],city[20];
		void acc() //function overloading
		{
		cout<<"Enter Person Name : ";
		cin>>name;
		cout<<"Enter Person City : ";
		cin>>city;
		cout<<"Enter Person Mobile Number : ";
		cin>>mob;
		}

		void acc(char nme[]) //function overloading
		{
		if(strcmp(nme,name)==0)
		{
		cout<<"\nPerson Name : "<<name;
		cout<<"\nPerson Mobile Number : "<<mob<<endl;
		}
		}

		void acc(int mno) //function overloading
		{
		if(mno==mob)
		{
		cout<<"\nPerson Name : "<<name;
		cout<<"\nPerson Mobile Number : "<<mob<<endl;
		}
		}

		void dis()
		{
		cout<<"\nPerson Details :"<<endl;
		cout<<"\n\nPerson Name : "<<name;
		cout<<"\nPerson Mobile Number : "<<mob;
		cout<<"\nPerson City : "<<city;
		}
};

int main()
{
char name[10];
int mno,i,ch,no;
clrscr();
person p[20];
do
{
	cout<<"\n1.Accept Person Details";
	cout<<"\n2.Display Person Details";
	cout<<"\n3.To Search mobile number of a given person";
	cout<<"\n4.To Search Person details of a given mobile number";
	cout<<"\n5.Exit";
	cout<<"\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	{
	case 1:
		cout<<"\nEnter how many record to insert : ";
		cin>>no;
		for(i=0;i<no;i++)
		{
		p[i].acc();
		}
		break;

	case 2:
		for(i=0;i<no;i++)
		{
		p[i].dis();
		}
		break;

	case 3:
		cout<<"Enter person name search for mobile number : ";
		cin>>name;
		for(i=0;i<no;i++)
		{
		p[i].acc(name);
		}
		break;

	case 4:
		cout<<"Enter mobile number to search for person name : ";
		cin>>mno;
		for(i=0;i<no;i++)
		{
		p[i].acc(mno);
		}
		break;
	}
}while(ch!=5);
getch();
return 0;
}

