#include<iostream>
using namespace std;
class num
{
	string data;

	public:
			num();
			num(string);
			void show();
			friend num operator+(num,num);
			//num operator++();
			//num operator++(int);
};

/*num num::operator++()
{
	num s;
	s.data=++data;

	return s;
}

num num::operator++(int p)
{
	num s;
	s.data=data++;

	return s;
}
*/

num::num()
{
	data=0;
}

num::num(int a)
{
	data=a;
}

void num::show()
{
	cout<<"\n"<<data;
}

num operator+(num n1,num n2)
{
	num s;
	s.data=n1.data+n2.data;
	return s;
}

int main()
{
	num n1(5),n2(10),n3;

	n3=n1+n2;

	n3.show();

	n3=n1+50;  //+(n1,50);

	n3.show();

	n3=100+n1;  //+(100,n1);

	n3.show();

	//n3=++n1;

	//n3.show();

	//n3=n1++;

	//n3.show();
	//n1.show();

}