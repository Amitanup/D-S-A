#include<stdio.h>
#include<stdlib.h>
struct append1
{
int data;
struct append1 *next;
};
void append(){
    struct append1 *head=NULL;
    struct append1 *nw,*temp;
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (head==NULL)
    {
        nw=(struct append1*)malloc(sizeof(struct append1));
        nw->data=num;
        nw->next=NULL;
        head=nw;
    }
    else
    temp=head;
    while (temp->next !=NULL)
    {
     temp=temp->next;
        nw=(struct append1*)malloc(sizeof(struct append1));
        nw->data=num;
        nw->next=NULL;
        temp->next=nw;
    }
    
    
}
int main(){
    append();
    return 0;
}
