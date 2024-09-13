#include <iostream>
using namespace std;

class abc
{
	int a;
	
	public:
		friend void m1(abc);
};

void m1(abc o)
{
	o.a=5;
	cout<<o.a;
}

int main()
{
	abc ob1;
	m1(ob1);
}