#include<iostream.h>
#include<conio.h>

class base
{
public:
virtual void print()
{
cout<<"base function ";
}
};
class derive:public base
{
public:
void print()
{
cout<<"derive function";
}
};
int main()
{
clrscr();
derive d;
base *base1 = &d;
base1 -> print();
getch();
return 0;
}