#include<iostream.h>
#include<conio.h>
class B;                //function decleration
class A
{
int x;
public:
void setdata(int i)

    {

	 x=i;

    }
    friend void min(A,B);         //friend function

};

class B
{
int y;
public:
void setdata(int i)
    {
	y=i;

    }
    friend void min(A,B);
};
void min(A a,B b)
{
if(a.x<=b.y)
cout<<a.x<<endl;
else
cout<<b.y<<endl;
}
int main()
{
A a;
B b;
int p,q;
cout<<"enter the value of p"<<endl;
cin>>p;
a.setdata(p);
cout<<"enter the value of q"<<endl;
cin>>q;
b.setdata(q);
min(a,b);
return 0;
}
