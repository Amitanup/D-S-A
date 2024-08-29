#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    };
void append(){
    struct node *head=NULL;
        struct node *nw,*temp;
        int num;
        printf("Enter the number:");
        scanf("%d",&num);
        if (head==NULL)
        {
            nw=(struct node*)malloc(sizeof(struct node));
            nw->data=num;
            nw->next=NULL;
            head=nw;
        }
        else{
            temp=head;
            while (temp->next !=NULL)
            {
                temp=temp->next;
                nw=(struct node*)malloc(sizeof(struct node));
                nw->data=num;
                nw->next=NULL;
                temp->next=nw;            }
            
        }
        
}
int main(){
    append();
    return 0;
}