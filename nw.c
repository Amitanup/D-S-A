#include<stdio.h>
#include <stdlib.h>
struct dnode
{
    struct dnode *pre;
    int data;
    struct dnode *next;
};
struct dnode *head;
head=NULL;
void add_of_biginige(){
    struct dnode *nw;
    int num,ch=1;
    while (ch)
    {
    printf("Enter the number of add of linklist");
    scanf("%d",&num);
    nw=(struct dnode*)malloc(sizeof(struct dnode));
    nw->data=num;
    nw->next=NULL;
    nw->pre=NULL;
    nw=head;
    printf("Enter the 1 or 0");
    scanf("%d",&ch);
}
}
void deisply(){
    struct dnode *temp;
    temp=head;
    int cound=0;
    while (temp!=NULL)
    {
     printf("%d \t",temp->data);
     temp=temp->next;
     cound++

    }
    printf("%d notes is thair ",cound);
    return 0;
    
}

