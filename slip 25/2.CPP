#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream.h>
#include<ctype.h>

int main()
{
	char fname[10];
	clrscr();
	ifstream fin;
	ofstream fc,fu,fl,fd;
	cout<<"\nEnter file name : ";
	cin>>fname;
	fin.open(fname,ios::in);
	fc.open("other.txt",ios::out);
	fu.open("upper.txt",ios::out);
	fl.open("lower.txt",ios::out);
	fd.open("digit.txt",ios::out);
	if(fin.fail())
	{
		cout<<"File does not exists";
		exit(1);
	}
	char ch;
	while(!fin.eof())
	{
	ch=fin.get();
	if(islower(ch))
	{
	fl.put(ch);
	}
	else if(isupper(ch))
	{
	fu.put(ch);
	}
	else if(isdigit(ch))
	{
	fd.put(ch);
	}
	else if((ch>31 && ch<48) || (ch>57 && ch<65) || (ch>122 && ch<127))
	{
	fc.put(ch);
	}
	}
	cout<<"Task completed";
	getch();
	return 0;
}