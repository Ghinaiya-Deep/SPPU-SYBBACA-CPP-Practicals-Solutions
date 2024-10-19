

#include<iostream.h>
#include<conio.h>
#include<string.h>

class mystring
{
	char *str;
	int len;
	public:
		mystring()
		{}

		mystring(char s[])
		{
			len=strlen(s);
			str=new char[len+1];
			strcpy(str,s);
		}

		void display()
		{
			cout<<str<<"\n";
		}

		mystring operator+(mystring ob)
		{
			mystring a;
			int len1,len2;
			len1=strlen(str);
			len2=strlen(ob.str);
			a.str=new char[len1+len2];
			strcpy(a.str,str);
			strcat(a.str,ob.str);
			return a;
		}
};

int main()
{
	char s1[10],s2[20];
	clrscr();
	cout<<"\nEnter 1st string : ";
	cin>>s1;
	cout<<"\nEnter 2nd string : ";
	cin>>s2;
	mystring m1(s1),m2(s2),m3;
	m1.display();
	m2.display();
	m3=m1+m2;
	m3.display();
	getch();
	return 0;
}
