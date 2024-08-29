#include<stdio.h>
#include<stdlib.h>
void implemention(){
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*nw,*temp;
    head=0;
    int count=0;
    int ch;
     while (ch)
     {
    
     
    nw=(struct node*)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d",&nw->data);
nw->next=NULL;
if (head==0)
{
    head=temp=nw;
}
else{
    temp->next=nw;
    temp=nw;
}
printf("Do you wand to continue prass 0 or 1 :");
scanf("%d",&ch);
}
temp=head;
while (temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
    count++;
};
printf("\nthis %d no of node ",count);


}
void delet(){
    struct node *head;
    if (head==NULL)
    {
        printf("List is emply");
        return;
    }
    else{
        struct node *temp,*old;
        temp=head;
        int key;
        printf("Enter the Number of deleted :");
        scanf("%d",&key);
        while (temp!=NULL)
        {
            if (temp->data==head)
            {
                if (temp==head)
                {
                head=temp->next;
                }
                else{
                    old->head=temp->next;
                    free(temp);
                    return;
                }
                free(temp);
                return;
                else{
                    old=temp;
                    temp=temp->next;
                }
            }
            printf("\n Element not found in the list se deleate ");
            
        }
        
    }
    
}
int main(){
 implemention();
 delet();
    return 0;
}