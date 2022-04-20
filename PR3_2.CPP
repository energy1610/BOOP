#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class test
{
public:
static int x;
void show()
{
cout<<x<<endl;
cout<<setw(10);
}

};
int test::x=125;
int main()
{
test t;
float pi=3.148454654;
clrscr();
t.show();
cout<<setw(15);
cout<<"hello world"<<endl;
return 0;
}