#include<stdio.h>
struct student
{
    char name [20];
    int rollno;
    float makes;
} student1;
int main(){
    printf("enter the student name in 20 words:");
    scanf("%s",student1.name);
    printf("enter the student roll no :");
    scanf("%d",&student1.rollno);
    printf("enter student makes");
    scanf("%f",&student1.makes);
    
    printf("Student name is :%s",student1.name);
    printf("Student roll no is: %d",student1.rollno);
    printf("student makes is : %f",student1.makes);
    return 0;

}