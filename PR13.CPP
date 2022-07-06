#include<iostream.h>
#include<conio.h>

class test

{
int x;
public:

	test rethub(int x)

	{

	this->x=x;
	return *this;

	}

void disp()

{

	cout<<x;
}

};

int main()

{
	test t;
	test p=t.rethub(8);
	p.disp();
return 0;

}