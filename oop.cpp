#include<iostream>
using namespace std;
class student1{
    public:
    string name;
    int rollno;
    bool gender;

void printinfo(){
    cout<<"enter the name :";
    cout<<name<<endl;
    cout<<"enter the roll no :";
    cout<<rollno<<endl;
    cout<<"enter the student gender : ";
    cout<<gender<<endl;
}
};
int main(){
    // student1 a;
    // a.name = 'amit';
    // a.rollno=10;
    // a.gender=1;
    student1 arr[3];
    for (int i = 0; i <=3; i++)
    {
        cin>>arr[i].name;
        cin>>arr[i].rollno;
        cin>>arr[i].gender;
     }
   
    for (int j = 0; j <=3; j++)
    {
        arr[j].printinfo();
    }
    
    
    
    // cout<<"this is student name :"<<a.name<<a.rollno<<a.gender<<endl;
    return 0;
}