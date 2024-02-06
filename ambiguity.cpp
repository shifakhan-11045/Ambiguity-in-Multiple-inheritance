#include<iostream>
using namespace std;
class person
{
	public:
		int age;
		 
		 char name[10];
};

class student : virtual public person
{
	public:
		int rn,mk;
};

class emp: virtual public person
{
	public:
		int emp_code;
		char dsg[10];
};

class drvd: public student,public emp
{	public:
	int rn,mk,age,emp_code;
	char name[10],dsg[10];
};

int main()
{
	drvd d;
	cout<<d.name;
	cout<<d.rn;
	cout<<d.age;
	cout<<d.mk;
	cout<<d.emp_code;
	cout<<d.dsg;
}
