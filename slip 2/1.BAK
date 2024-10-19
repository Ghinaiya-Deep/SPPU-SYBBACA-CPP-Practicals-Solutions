/* write a c++ program to find volume of cylinder, cone and sphere.
(use function overloading). */

#include<iostream.h>
#include<conio.h>
#include<math.h>

float volume(int,int); //cylinder
float volume(float,float);  //cone
float volume(float);  //sphere


int main()
{
int cylinder_h,cylinder_r,cone_h,cone_r;
float sphere_r;
clrscr();
cout<<"Enter Dimension"<<endl;
cout<<"1. Cylinder"<<endl;
cout<<"Height : ";
cin>>cylinder_h;
cout<<"Radius : ";
cin>>cylinder_r;
cout<<endl;

cout<<"2. Cone"<<endl;
cout<<"Height : ";
cin>>cone_h;
cout<<"Radius : ";
cin>>cone_r;
cout<<endl;

cout<<"3. Sphere"<<endl;
cout<<"Radius : ";
cin>>sphere_r;
cout<<endl;

cout<<"\n\nThe Volume of Cylinder is : "<<volume(cylinder_r,cylinder_h)<<endl;
cout<<"The Volume of Cone is : "<<volume(cone_r,cone_h)<<endl;
cout<<"The Volumer of Sphere is : "<<volume(sphere_r)<<endl;
getch();
return 0;
}



float volume(int r,int h)
{
	return(3.14*r*r*h);
}

float volume(float r,float h)
{
	return(3.14*r*r*h/3);
}

float volume(float r)
{
	return(0.33*3.14*r*r*r);
}