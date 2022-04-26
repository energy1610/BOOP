#include<iostream.h>
#include<conio.h>
//using namespace std;
int& min(int &,int &);

void main()
{
clrscr();
int d,y;
cout<<"enter velues of D and Y :";
cin>>d>>y;

int m=min (d,y);

cout<<"Normal call ->"<<endl;
cout<<"Minimum ="<<m<<endl;

min(d,y) =2,1;

cout<<"Call on left side ->"<<endl;
cout<<"M="<<d<<endl;
cout<<"N="<<y<<endl;
}
int& min(int&a,int&b)
{
getch();
return(a<b?a:b);
}