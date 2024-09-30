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
    struct node *temp=head,*nw;
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
void rev(){
    if (head==NULL)
    {
        printf("The list is eplty");
        return;
    }
    else{
        struct node *x,*y,*z;
        x=head;
        y=NULL;
        while (x!=NULL)
        {
            z=y;
            y=x;
            x=x->next;
            y->next=z;
            y->pre=x;
        }
        head=y;
        
    }
    
}
// void delid(){
// struct node *temp,
// temp=head;
//     if (head==NULL)
//     {
//         printf("List is empty");
//         return;
//     }
//     else
    
    
// }

void display() {
    struct node *temp = head;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("The list is: ");
    while (temp != NULL) {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void add_after(){
    int i,pos,num;
    struct node *temp,*nw;
    printf("Enter the position in insart a node");
    scanf("%d",&pos);
    temp=head;
    for ( i = i; i < pos; i++)
    {
        if (temp==NULL)
        {
            printf("Envalied posetion youy insarting :");
            return;
        }
        
    }
    nw=(struct node*)malloc(sizeof(struct node));
    printf("Enetr the number of you insart the element :");
    scanf("%d",&num);
   nw->data=num;
   nw->next=temp->next;
   nw->pre=temp;
   temp->next->pre=nw;
   temp->next=nw; 
    

}
void delet(){
    if (head==NULL)
    {
        printf("|list is empty no note is their :")
        return;
    }
  int num;
  printf("Enter thr number to have deleted :");
  scanf("%d",&num);
  struct node *temp, *old ;
  temp=head;
  while (temp!=NULL)
  {
    if (temp->data=num)
    {
        if (temp==head)
        {
            temp->pre=NULL;
            head=temp->next;
        }
        else{
            old->next=temp->next
            temp->pre=old->next;

        }
        
        
    }
    else
    {
        old=temp;
        temp=temp->next;
    }
    
    
  }
     
}

int main() {
     add_of_bigenig();
     display();
     add_after();
     delet();    
    display();
    return 0;
}
