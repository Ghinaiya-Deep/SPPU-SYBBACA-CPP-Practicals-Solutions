
/* b)	Write a C++ program to accept 'n' numbers from use
r through Command Line Argument.
Store all Even and Odd numbers in file "Even.txt"
and "Odd.txt" respectively.

*/

#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#include<fstream.h>


void main()
{
ofstream out;
int a[10]={1,2,3,4,5,6,7,8,9},b[10],i;
clrscr();
out.open("input.txt");
out.write((char *)&a,sizeof(a));
out.close();
ifstream in;
ofstream fp1,fp2;
in.open("input.txt");
in.read((char *)&b,sizeof(b));
fp1.open("even.txt");
fp2.open("odd.txt");
for(i=0;i<10;i++)
{
if(b[i]%2==0)
{
fp1<<b[i]<<"";
}
else
{
fp2<<b[i]<<"";
}
}

in.close();
fp1.close();
fp2.close();
ifstream fp;
char ch;
fp.open("even.txt");
cout<<"The even file contents are :\n ";
while(fp)
{
fp.get(ch);
cout<<"\t"<<ch;
}
fp.close();
fp.open("odd.txt");
cout<<"\n\nThe odd file contents are :\n ";
while(fp)
{
fp.get(ch);
cout<<"\t"<<ch;
}
fp.close();

getch();
}