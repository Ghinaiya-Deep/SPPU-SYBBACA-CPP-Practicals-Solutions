/* ) Design two base classes Student (S id, Name, Class) and Competition (C id, C Name). Derive a class Stud Comp(Rank) from it. Write a menu driven program to perform following functions:
i.	Accept information.
ii.	Display information.
iii.	Display Student Details In the ascending order of Rank of a specified competition.
	(Use array of objects)
*/


#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>


class student
{
	public:
		int roll;
		char name[10],std[10];
		void accept_s();
		void display_s();
};

void student::accept_s()
{
	cout<<"\nEnter roll no : ";
	cin>>roll;
	cout<<"\nEnter name of student : ";
	cin>>name;
	cout<<"\nEnter class of student : ";
	cin>>std;
}

void student::display_s()
{
	cout<<"\nStudent Details : \n";
	cout<<"Roll No : "<<roll;
	cout<<"\nName : "<<name;
	cout<<"\nStd : "<<std;
}

class competition
{
	public:
		int cid;
		char cname[20];
		void accept_c();
		void display_c();
};

void competition::accept_c()
{
	cout<<"\nEnter competition id : ";
	cin>>cid;
	cout<<"\nEnter competition name : ";
	cin>>cname;
}

void competition::display_c()
{
	cout<<"\nCompetition id : "<<cid;
	cout<<"\nCompetition name : "<<cname;
}

class studcomp:public student,public competition
{
	public:
		int rank;
		void accept_sc();
		void display_sc();
		friend void sort(studcomp,int);
};

void studcomp::accept_sc()
{
	cout<<"\nEnter rank : ";
	cin>>rank;
}

void studcomp:: display_sc()
{
	cout<<"\nRank : "<<rank<<endl;
}

void sort(studcomp *sc,int num)
{
	int i,j,temp,tempr;
	for(i=0;i<num;i++)
	{
	for(j=0;j<num-i-1;j++)
	{
	if(sc[j].rank > sc[j+1].rank)
		{
			temp=sc[j].rank;
			sc[j].rank=sc[j+1].rank;
			sc[j+1].rank=temp;

			 tempr=sc[j].student::roll;
			 sc[j].student::roll=sc[j+1].student::roll;
			 sc[j+1].student::roll=tempr;
		}
	}
	}
	cout<<"\nSorted deatils : "<<endl;
	for(i=0;i<num;i++)
	{
	cout<<"\nRank = "<<sc[i].rank<<" " <<"Roll no = "<<sc[i].student::roll<<" "<<endl;
	}
}

int main()
{
	int num,ch;
	studcomp *sc=new studcomp[num];
	clrscr();
	do
	{
	cout<<"\n1.Accept infromation";
	cout<<"\n2.Display information";
	cout<<"\n3.Display information in ascending order";
	cout<<"\n4.Exit";
	cout<<"\n\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	{
		int i;
		case 1:
			cout<<"\nEnter number of student :\n";
			cin>>num;
			for(i=0;i<num;i++)
			{
			sc[i].student::accept_s();
			sc[i].competition::accept_c();
			sc[i].studcomp::accept_sc();
			}
			break;

		case 2:
			for(i=0;i<num;i++)
			{
			sc[i].student::display_s();
			sc[i].competition::display_c();
			sc[i].studcomp::display_sc();
			}
			break;

		case 3:
			for(i=0;i<num;i++)
			{
			sort(sc,num);
			}
			break;

		case 4:
			exit(0);

		}
	}while(ch<=4);
getch();
return 0;
}

