#include<iostream>
using namespace std;

class Human
{
    public:
string name;
int age;
char gender;
};
int main(){
    Human h1,h2,h3;
    h1.name="amit";
    h1.age=20;
    h1.gender="M";
    cout << h1.name <<"is" << h1.age <<"year old"<<h1.gender;
    return 0;
}