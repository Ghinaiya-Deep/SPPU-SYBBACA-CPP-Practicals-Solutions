/*  b)	Create a base class Student with data members Roll No, Name. Derives two classes from it, class Theory with data members Ml, M2, M3, M4 and class Practical with data members PI, P2. Class Result(Total Marks, Percentage, Grade) inherits both Theory and Practical classes. (Use concept of
Virtual Base Class and protected access specifiers)
Write a C++ menu driven program to perform the following functions:
i. Accept Student Information ii. Display Student Information iii. Calculate Total marks, Percentage and Grade. [Marks 25]
 
*/



#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

class student
{
	protected :
		int rno;
		char name[20];
	public:
		void getdetails();
};

class theory:public virtual student
{
	protected:
		int mark1,mark2,mark3,mark4;
	public:
		void getmarks();
};

class practical:public virtual student
{
	protected:
		int p1,p2;
	public:
		void getpractical();
};

class result:public theory,public practical
{
	int total_marks;
	float per;
	char grade[10];

	public:
		void cal();
		void display();
};

void student::getdetails()
{
	cout<<"\nEnter Roll no and Name :\n ";
	cin>>rno>>name;
}

void theory::getmarks()
{
	cout<<"\nEnter marks of 4 subject : \n";
	cin>>mark1>>mark2>>mark3>>mark4;
}

void practical::getpractical()
{
	cout<<"\nEnter practical details : \n";
	cin>>p1>>p2;
}

void result::cal()
{
	int i;
	total_marks=mark1+mark2+mark3+mark4+p1+p2;
	per=total_marks/6;
	if(per<50)
	strcpy(grade,"C");

	else if(per<60)
	strcpy(grade,"B");

	else if(per<75)
	strcpy(grade,"A");

	else
	strcpy(grade,"A+");
	cout<<"\nCalculation completed..";
}


void result::display()
{
	cout<<"\n\nRoll no = "<<rno<<"\nName = "<<name;
	cout<<"\n\nTheory Marks : \n"<<"Marks 1 = "<<mark1<<"\n"<<"Marks 2 = "<<mark2<<"\nMarks 3 = "<<mark3<<"\nMarks 4 = "<<mark4;
	cout<<"\n\nPractcal : \n"<<"Practical p1 = "<<p1<<"\nPractical p2 = "<<p2;
	cout<<"\n\nPercentage = "<<per;
	cout<<"\nGrade = "<<grade;
}

int main()
{
	int n,i,ch,j;
	result r[40];
	clrscr();
	do
	{
	cout<<"\n1.Accept student Information";
	cout<<"\n2.Display student Infromation";
	cout<<"\n3.Calculate percenatge and grade";
	cout<<"\n4.Exit";
	cout<<"\n\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"\nEnter Number of student : ";
			cin>>n;
			for(i=0;i<n;i++)
			{
				cout<<"\nEnter student details :\n";
				r[i].getdetails();
				r[i].getmarks();
				r[i].getpractical();
			}
			break;

		case 2:
			for(i=0;i<n;i++)
			{
				r[i].display();
			}

			break;

		case 3:
			for(i=0;i<n;i++)
			{
				r[i].cal();
			}
			break;

		case 4:
			exit(0);


	}
	}while(ch<=4);

getch();
return 0;
}

