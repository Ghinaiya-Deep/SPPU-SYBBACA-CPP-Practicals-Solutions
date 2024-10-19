/* b)	Create a C++ base class Media. Derive two different classes from it, class NewsPaper with data members N Name, N Editor, N Price, No of Pages and class Magazine with data members M Name, M Editor, M Price. Write a C++ program to accept and display information of both NewsPaper and
	Magazine. (Use pure virtual function)
*/


#include<iostream.h>
#include<conio.h>

class media
{
	public:
		virtual void display()=0;
};

class newspaper:public media
{
	public:
	int no_of_pages,n_price;
	char n_name[20],n_editor[20];
	void getnewspaper()
	{
		cout<<"\nEnter no of pages : ";
		cin>>no_of_pages;
		cout<<"Enter newspaper price : ";
		cin>>n_price;
		cout<<"Enter newspaper name : ";
		cin>>n_name;
		cout<<"Enter newspaper editor : ";
		cin>>n_editor;
	}
	void display();
};

class magazine:public media
{
	public:
		char m_name[20],m_editor[20];
		int m_price;

		void getmagazine()
		{
			cout<<"\n\nEnter magazine name : ";
			cin>>m_name;
			cout<<"Enter magazine editor : ";
			cin>>m_editor;
			cout<<"Enter magazine price : ";
			cin>>m_price;
		}
		void display();
};


void newspaper::display()
{
	cout<<"\n\nNo_of_pages : "<<no_of_pages;
	cout<<"\nNewspaper price : "<<n_price;
	cout<<"\nNewspaper name : "<<n_name;
	cout<<"\nNewspaper editor : "<<n_editor;
}

void magazine::display()
{
	cout<<"\n\nMagazine name : "<<m_name;
	cout<<"\nMagazine editor : "<<m_editor;
	cout<<"\nMagazine price : "<<m_price;
}

void main()
{
	clrscr();
       newspaper n;
       n.getnewspaper();
       n.display();
	magazine m;
	m.getmagazine();
	m.display();
	getch();
}