#include<stdio.h>
struct student
{
    char name[30];
    int rollno;
    float makes;
}s[10];
int main(){
    int n;
    printf("Enter the total number of Student");
    scanf("%d",&n);
    printf("-------student detells-------- ");
    for (int i = 0; i < n; i++)
    {
        printf("enter the student name:");
        scanf("%s",s[i].name);
        printf("Enter the roll no oof the student: ");
        scanf("%d",&s[i].rollno);
        printf("enter the makes of the student:");
        scanf("%f",&s[i].makes);
        }
        for (int i = 0; i < n; i++)
        {
           printf("%s %d %f",s[i].name,s[i].rollno,s[i].makes);
        }
    
    return 0;
    
}
