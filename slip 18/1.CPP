/* a)	Create a C++ class Student with data members Roll no, S Name, Class, Percentage. Accept two students information and display information of student having maximum percentage. (Use this pointer)	
*/


#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class student
{
	public:
		int id,per;
		char name[40],class1[40];
		void accept()
		{
			cout<<"\nEnter id : ";
			cin>>id;
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter class : ";
			cin>>class1;
			cout<<"Enter per : ";
			cin>>per;
		}

		void display()
		{
			cout<<"\n\nStudent id = "<<this->id;
			cout<<"\nStudent name = "<<this->name;
			cout<<"\nStudent class = "<<this->class1;
			cout<<"\nStudent per = "<<this->per;
		}
};

void main()
{
	clrscr();
	student s[20];
	int num,ch,per,i,temp=0;
	do
	{
	cout<<"\n1.Accept information";
	cout<<"\n2.Display information";
	cout<<"\n3.Maximum percentage";
	cout<<"\n4.Exit";
	cout<<"\n\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	{
			case 1:
			cout<<"\nEnter no of student : ";
			cin>>num;
			for(i=0;i<num;i++)
			{
			s[i].accept();
			}
			break;

		case 2:
			for(i=0;i<num;i++)
			{
			s[i].display();
			}
			break;

		case 3:

			for(i=0;i<1;i++)
			{
			if(s[temp].per<s[i].per)
			{
				temp=i;
			}
			cout<<"\n\nStudent with highest percentage is : "<<s[temp].per;
			cout<<"\nStudent name is : "<<s[temp].name<<endl;
			}
			break;


		case 4:
			exit(0);

		}
	}while(ch<=4);
getch();
}

