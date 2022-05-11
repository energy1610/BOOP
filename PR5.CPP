#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

struct student
{
int r_no;
char name[20];
int age;
char br[10];
};
int main()
{
student s;
int i;
clrscr();
for(i=0;i<5;i++)
{
cout<<"Enter roll no:";
cin>>s.r_no;
cout<<"Enter name:";
cin>>s.name;
cout<<"Enter age:";
cin>>s.age;
cout<<"Enter branch:";
cin>>s.br;
}
cout<<"Display student details:"<<endl;
for(i=0;i<5;i++)
{
cout<<"student roll:"<<s.r_no<<endl;
cout<<"student name:"<<s.name<<endl;
cout<<"student age:"<<s.age<<endl;
cout<<"student branch:"<<s.br<<endl;
cout<<"."<<endl;
cout<<"."<<endl;
}
return 0;
}