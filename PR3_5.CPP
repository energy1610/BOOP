#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

struct student{
int r_no;
char name[50];
int age;
char city[50];
};

int main()
{
student s;
clrscr();
cout<<"enter name :";
cin>>s.name;
cout<<"enter roll no :";
cin>>s.r_no;
cout<<"enter age :";
cin>>s.age;
cout<<"enter city :";
cin>>s.city;
return 0;
}
