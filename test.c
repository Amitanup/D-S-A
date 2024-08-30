#include<stdio.h>
#include<stdlib.h>
void desplay(){
int temp=20,head,count=0;
if (temp==NULL)
{
    printf("list is empty , no note are ther :");
    count=0;
}

temp=head;
while (temp !=NULL)
{
 printf("%d"temp->data);
 temp=temp->next;
 count++;
 return count;
 
}
printf("%d note are thar ",count);

}
int main(){
    desplay();

}