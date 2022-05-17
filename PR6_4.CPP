#include<iostream.h>
#include<conio.h>
class student
{
private:

	int en_no;
	char name[20];
	char course[15];
	int sub1,sub2,sub3;
public:
	void get()

	{

		cout<<"Enrollment No:";
		cin>>en_no;
		cout<<"Student Name:";
		cin>>name;
		cout<<"Course:";
		cin>>course;
		cout<<"subject 1:";
		cin>>sub1;
		cout<<"subject 2:";
		cin>>sub2;
		cout<<"subject 3:";
		cin>>sub3;

	}

	void put()

	{
		cout<<"Enrollment No:"<<en_no<<endl;
		cout<<"Student Name:"<<name<<endl;
		cout<<"Student Course:"<<course<<endl;

	}

	void sum()

	{
		int total=sub1+sub2+sub3;
		cout<<"Total Marks:"<<total<<endl;

	}
};

int main()

{
	student s[50];
	int i,n;
	cout<<"Enter Number of Student:";
	cin>>n;
	cout<<"----Enter Student----";

		for(i=0;i<n;i++)

		{

			s[i].get();

		}
		cout<<"----Print Student Detail----";
			for(i=0;i<n;i++)

			{
				s[i].put();
				s[i].sum();

			}


return 0;
}