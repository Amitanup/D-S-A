#include<iostream>
#include<string.h>

using namespace std;

class emp
{
	char name[15];
	int pay;
	public:
			emp()
			{
				strcpy(name,NULL);
				pay=0;
			}
			friend ostream& operator <<(ostream&, emp&);
			friend istream& operator >>(istream&, emp&);
};

ostream& operator <<(ostream &s, emp &e)
{
	s<<"\n"<<e.name;
	s<<"\n"<<e.pay;
	return s;
}

istream& operator >>(istream &s, emp &e)
{
	cout<<"Enter the name:";
	s>>e.name;
	cout<<"Enter the pay:";
	s>>e.pay;
	return s;
}

int main()
{
	emp e1,e2;
	cin>>e1>>e2;
	cout<<e1;
}