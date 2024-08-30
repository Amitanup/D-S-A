#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void implemention() {
    struct node *nw, *temp;
    int count = 0;
    int ch = 1;

    while (ch) {
        nw = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &nw->data);
        nw->next = NULL;
        
        if (head == NULL) {
            head = temp = nw;
        } else {
            temp->next = nw;
            temp = nw;
        }
        
        printf("Do you want to continue? Press 0 to stop or 1 to continue: ");
        scanf("%d", &ch);
    }

    temp = head;
    while (temp != NULL) {
        printf("%d\t", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nNumber of nodes: %d\n", count);
}
void rev_print(){
    struct node *temp;
    int count=0;
    int arr[count];
    temp=head;
    while(temp!=NULL)
    {
     arr[count]=temp->data;
     count++;
     temp=temp->next;
    }
    for (int i = count-1; i >=0; i--)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
int main(){
    implemention();
    rev_print();
}