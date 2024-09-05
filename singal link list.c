#include <stdio.h>
#include <stdlib.h>


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

void add_of_begening() {
    struct node *nw;
    int num;
    nw = (struct node*)malloc(sizeof(struct node));
    printf("Enter the number to add at the beginning: ");
    scanf("%d", &num);
    nw->data = num;
    nw->next = head;
    head = nw;
}

void delet() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *temp = head, *old = NULL;
    int key;
    printf("Enter the number to delete: ");
    scanf("%d", &key);

    while (temp != NULL) {
        if (temp->data == key) {
            if (temp == head) {
                head = temp->next;
            } else {
                old->next = temp->next;
            }
            free(temp);
            printf("Element deleted\n");
            return;
        }
        old = temp;
        temp = temp->next;
    }

    printf("Element not found in the list\n");
}

int printe() {
int count=0;
struct node *temp;
if(temp==NULL)
{
    printf("list is empty , no note are ther :");
    count=0;
}
else{

temp=head;
while (temp!=NULL)
{
 printf("%d",temp->data);
 temp=temp->next;
 count++;
}
printf("%d no note is thear",count);
}
return 0;
}

void append() {
    struct node *temp, *nw;
    int numb;
    
    nw = (struct node*)malloc(sizeof(struct node));
    printf("Enter the number of new node data: ");
    scanf("%d", &numb);
    nw->data = numb;
    nw->next = NULL;

    if (head == NULL) {
        head = nw;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nw;
    }
}

void any_pos_node_add() {
    int num, pos;
    printf("Enter the position of node: ");
    scanf("%d", &pos);

    if (pos < 1) {
        printf("Invalid position!\n");
        return;
    }

    struct node *temp = head;
    struct node *nw = (struct node*)malloc(sizeof(struct node));
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    nw->data = num;

    if (pos == 1) {
        nw->next = head;
        head = nw;
        return;
    }

    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("The list has fewer than %d nodes, unable to insert\n", pos);
        free(nw);
    } else {
        nw->next = temp->next;
        temp->next = nw;
    }
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
    for (int i =count-1; i >=0; i--)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
    
}
void rev(){
    struct node *x,*y,*z;
    x=head;
    y=NULL;
    if (head==NULL)
    {
        printf("List is empty: ");
    }
    else{
        z=y;
        y=x;
        x=x->next;
        y->next=z;
    }
    head=y;
    return 0;
    }
    


int main() {
    int choice;

    while (choice != 7){
        printf("\nMenu:\n");
        printf("1. Implement the linked list\n");
        printf("2. Add node at the beginning\n");
        printf("3. Append node at the end\n");
        printf("4. Delete a node\n");
        printf("5. Insert node at a specific position\n");
        printf("6. Print the list\n");
        printf("7. reversed number print of list\n");
        printf("8. reversed list \n");
        printf("9. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                implemention();
                break;
            case 2:
                add_of_begening();
                break;
            case 3:
                append();
                break;
            case 4:
                delet();
                break;
            case 5:
                any_pos_node_add();
                break;
            case 6:
                printe();
                break;
            case 7:
                 rev_print();
                 break;
            case 8:
                 rev();
                 break;
            case 9:
                printf("Exiting...\n");
                exit(1);
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    };

    return 0;
}
