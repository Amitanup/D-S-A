#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *pre;
    int num;
    struct node *next;
};
struct node *head;
head=NULL;
void add_of_bigining(){
    struct node *nw;
    int number;
    printf("Enter the number of add of biginig the node :");
    scanf("%d",&number);
    nw=(struct node *)malloc(sizeof(struct node));
    nw->pre=NULL;
    nw->num=number;
    nw->pre=NULL;
}
void appent(){
struct node *nw,*temp;
int number;
temp=head;
nw=(struct node *)malloc(sizeof(struct node));
printf("Enter the number of append in node: ");
scanf("%d",&number);
while (temp->next=NULL)
{
  temp->next=nw;
  nw->next=NULL;
  nw->pre=temp;
  nw->num=number;
}

}
void delet(){
    int pos;

}
void display(){
    struct node *temp;
    temp=head;
    while (temp!=NULL)
    {
     printf("%d \t",temp->num);
     temp=temp->next;

    }
    

}

int main(){
    add_of_bigining();
    display();

    appent();

}