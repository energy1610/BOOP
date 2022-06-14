#include<iostream.h>
#include<conio.h>

class m
{
private:
	int sum;
public:
	m(int a,int b,int c)

	{

	sum=a+b+c;

	}
	void op()


	{
	cout<<"Your Entered Number Addition Is:"<<sum<<endl;

	}
};

	int main()

	{

	int d,y,a;

	clrscr();



	cout<<"Enter The Value Of d:"<<endl;
	cin>>d;
	cout<<"Enter The Value Of y:"<<endl;
	cin>>y;
	cout<<"Enter The Value Of a:"<<endl;
	cin>>a;
	m obj(d,y,a);
	obj.op();
getch();
return 0;
}