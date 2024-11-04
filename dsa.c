#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
}
struct node *head;
head=NULL;
void add(){
    int num;

    struct node *nw;
    nw=(struct node *)malloc(sizeof(struct node));
    printf("Enter the number of add of bigining");
    scanf("%d",&num);
    nw->data=num;
    nw->next=NULL;
    head=nw;
}
