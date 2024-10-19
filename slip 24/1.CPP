#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


class fixdeposit
{
	int fdno,mnth;
	float amt,rate,m_amt;
	char name[20];
	public:
		fixdeposit(int fno,int mnt,float am,float rt,float mamt,char *nm)
		{
			fdno=fno;
			mnth=mnt;
			amt=am;
			rate=rt;
			m_amt=mamt;
			strcpy(name,nm);
		}

		void accept()
		{
			cout<<"\nEnter FD No : ";
			cin>>fdno;
			cout<<"Enter Amount : ";
			cin>>amt;
			cout<<"Enter month : ";
			cin>>mnth;
			cout<<"Enter maturity amount : ";
			cin>>m_amt;
			cout<<"Enter name : ";
			cin>>name;
		}

		void display()
		{
			cout<<"\nFD no : "<<fdno;
			cout<<"\nMonth : "<<mnth;
			cout<<"\nAmount : "<<amt;
			cout<<"\nMaturity Amount : "<<m_amt;
			cout<<"\nName : "<<name;
		}

		void calculate(int rate=20)
		{
			double yr;
			yr=mnth/12.0;
			m_amt=amt*pow((1+rate/100),yr);
			cout<<"\n\nMaturity amount details is : "<<m_amt;
		}
};

void main()
{
	int fdno,mnth,rate,amt;
	char name[20];
	clrscr();
	fixdeposit f(fdno,mnth,amt,rate,0,name);
	clrscr();
	f.accept();
	f.calculate();
	f.display();
	getch();
}

