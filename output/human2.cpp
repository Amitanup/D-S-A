#include<iostream>
using namespace std;

class Human
{
    private:

int age;
public:
int gerAge(){
    return age;
}
void setAge(int value){
    age = value>=0 ? value: -value;
} 

};
int main(){
    Human h1;

    // h1.age=20;
    h1.setAge(-12);
    cout<< h1.gerAge()<<endl;


    // cout << h1.name <<"is" << h1.age <<"year old"<<h1.gender;
    return 0;
}