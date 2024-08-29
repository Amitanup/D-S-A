#include<stdio.h>
struct student
{
    char name [20];
    int rollno;
    float makes;
}s[5];
int main(){
   for(int i=0;i<2;i++){
    printf("----------student information----------");
    printf("Enter the %d student information :\n",s[i]);
    printf("Enter the student name:");
    scanf("%s\n",s[i].name);
    printf("Enter the student roll no :");
    scanf("%d\n",&s[i].rollno);
    printf("Enter the student makes");
    scanf("%f\n",&s[i].makes);
   }
   for (int i = 0; i < 2; i++)
   {
    printf("student detalls\n");
    printf("%s \n %d \n %2f",s[i].name,s[i].rollno,s[i].makes);
   }
   for (int i = 0; i < 2; i++)
   {
    if (s[i].makes>75)
    {
        printf("The student is 75 above makes :%2f\n",s[i].makes);
    }
    
   }
   
   return 0;
   
}
