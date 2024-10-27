#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *pre;
struct node *next;
};
struct node *head;
head=NULL;

void add_of_bigineg(){
    struct node *nw;
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    nw=(struct node *)malloc(sizeof(struct node));
    nw->data=num;
    nw->next=NULL;
    nw->pre=NULL;
    head=nw;

}
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
    add_of_bigineg();
    desplay();

}