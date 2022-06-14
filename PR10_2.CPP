#include<iostream.h>
#include<conio.h>

int c;
class m
{

	public:
	m()
	{
	c++;
	cout<<"number of constructor "<<c<<endl;
	}
};
int main()
{
clrscr();
m am,b,g,h,y;
getch();
return 0;
}
