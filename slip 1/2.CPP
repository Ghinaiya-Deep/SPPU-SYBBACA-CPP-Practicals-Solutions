/* Create a c++ class myfile with data member file pointer and filename.
write necessary  member function to accept and display file.
Overload the ollowing function  ::
+ f3=f1+f2 concatenate contents of file f1 and f2
! !f3      changes the case of laternate characters of file f3
*/
#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<fstream.h>


#include<string.h>
#define MAXSIZE (10)

class myfile
{
    FILE *fp; //file pointer
    char fn[MAXSIZE]; //file name

    public:
       myfile(const char* fname)
       {
         strcpy(fn,fname);
       }
       myfile operator+(myfile);
       void operator!();
       void display();
};

void myfile::display()
{
    fp =fopen(fn, "r"); //open file in read mode
    char ch;
    while((ch=fgetc(fp))!=EOF) // read until end of file reached
    {
        cout<<ch;
    }
    fclose(fp);//close the file after reading
}

void myfile::operator!()
{
    myfile f4("sy.txt"); //create object for another file
    char ch;
    fp=fopen(fn,"r");  //open source file in read mode
    f4.fp=fopen(f4.fn, "w"); //open destination file in write mode
    while((ch=fgetc(fp))!=EOF){
        if(isupper(ch)){
            fputc(tolower(ch),f4.fp) ; //convert  upper to lower case and write into desi. file
        }
        else if(islower(ch)){
            fputc(toupper(ch),f4.fp); //convert lower to upper
        }
        else{
            fputc(ch,f4.fp); //write  other  characters as it is
        }
    }
    fclose(fp);//close both file
    fclose(f4.fp);
    remove("abc.txt");
    rename("sy.txt","abc.txt");
}
myfile myfile::operator+(myfile f2)
{
   myfile f3("abc.txt");
   fp=fopen(fn,"r");
   f2.fp=fopen(f2.fn, "r");
   f3.fp=fopen(f3.fn,"w");
   char ch;
   while((ch=fgetc(fp))!=EOF)
   {
     fputc(ch,f3.fp);
   }
   fclose(fp);
   while((ch=fgetc(f2.fp))!=EOF)
   {
     fputc(ch,f3.fp);
   }

   return f3;
}

int main()
{

    myfile f1("xyz.txt");
    myfile f2("lmn.txt");
    myfile f3("abc.txt");
    clrscr();
    cout<<"first file\n";
    f1.display();
    cout<<"\nsecond file\n";
    f2.display();

    f3=f1+f2;
    cout<<"\nAfter concatnation file is:";
    f3.display();
    cout<<"\nAfter changes case\n";
    !f3;
    f3.display();
    getch();
    return 0;

}