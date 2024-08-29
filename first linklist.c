#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    };
void call(){
    struct node *head=NULL;
        struct node *nw;
        nw=(struct node*)malloc(sizeof(struct node));
        int num;
        printf("enter the number");
        scanf("%d",&num);
        nw->data=num;
        nw->next=head;
        head=nw;
        
    
}
int main(){
    call();
    return 0;
}