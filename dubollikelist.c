#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *pre;
    int data;
    struct node *next;
};

struct node *head = NULL;

void add_of_bigenig() {
    struct node *nw;
    int num;
    int ch=1;
    while (ch)
    {

    printf("Enter the number to add at the beginning: ");
    scanf("%d", &num);
    nw = (struct node*)malloc(sizeof(struct node));
 
    nw->data = num;
    nw->next = head;
    nw->pre = NULL;
    
    head = nw;
    
    printf("Enter the 1 or 0 1 mins agian add & 0 mins on add :");
    scanf("%d",&ch);
    }
}
void append(){
    struct node *temp,*nw;
    int num;
    printf("Enter the number of append in list :");
    scanf("%d",&num);
    if (head==NULL)
    {
     printf("List is empty");
     nw=(struct node*)malloc(sizeof(struct node));
     nw->data=num;
     nw->next=NULL;
     nw->pre=NULL;
     head=nw;
    }
    else
    {
     while (temp->next!=NULL)
     {
        temp=temp->next;
     }
     nw=(struct node*)malloc(sizeof(struct node));
     nw->data=num;
     temp->next=nw;
     nw->pre=temp;
     nw->next=NULL;
     
    }
    
    
    
}

void display() {
    struct node *temp = head;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("The list is: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    add_of_bigenig();
    display();
    append();
    display();
    return 0;
}
