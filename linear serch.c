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
    int ch = 1;
    while (ch) {
        printf("Enter the number to add at the beginning: ");
        scanf("%d", &num);
        nw = (struct node*)malloc(sizeof(struct node));
        nw->data = num;
        nw->next = head;
        nw->pre = NULL;
        
        if (head != NULL) {
            head->pre = nw;
        }

        head = nw;
        
        printf("Enter 1 to add another node or 0 to stop: ");
        scanf("%d", &ch);
    }
}

void append() {
    struct node *temp = head, *nw;
    int num;
    printf("Enter the number to append in the list: ");
    scanf("%d", &num);

    nw = (struct node*)malloc(sizeof(struct node));
    nw->data = num;
    nw->next = NULL;

    if (head == NULL) {
        nw->pre = NULL;
        head = nw;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nw;
        nw->pre = temp;
    }
}

void rev() {
    if (head == NULL) {
        printf("The list is empty\n");
        return;
    }

    struct node *temp = head;
    struct node *swap = NULL;

    while (temp != NULL) {
        swap = temp->pre;
        temp->pre = temp->next;
        temp->next = swap;
        temp = temp->pre;
    }

    if (swap != NULL) {
        head = swap->pre;
    }

    printf("The list has been reversed.\n");
}

void linearSearch() {
    struct node *temp = head;
    int a;
    printf("Enter the number to search: ");
    scanf("%d", &a);

    while (temp != NULL) {
        if (temp->data == a) {
            printf("%d is found in the list.\n", a);
            return;
        }
        temp = temp->next;
    }
    printf("The number %d is not found in the list.\n", a);
}

void delet() {
    struct node *temp = head;
    int key;
    
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Enter the number to delete: ");
    scanf("%d", &key);

    while (temp != NULL) {
        if (temp->data == key) {
            if (temp == head) {
                head = temp->next;
                if (head != NULL) {
                    head->pre = NULL;
                }
            } else {
                temp->pre->next = temp->next;
                if (temp->next != NULL) {
                    temp->next->pre = temp->pre;
                }
            }
            free(temp);
            printf("Element %d deleted\n", key);
            return;
        }
        temp = temp->next;
    }

    printf("Element %d not found in the list\n", key);
}

void display() {
    struct node *temp = head;
    if (head == NULL) {
        printf("The list is empty.\n");
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
    int choice;

    do {
        printf("\nDoubly Linked List Menu:\n");
        printf("1. Add at Beginning\n");
        printf("2. Append\n");
        printf("3. Reverse\n");
        printf("4. Linear Search\n");
        printf("5. Delete Node\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_of_bigenig();
                break;
            case 2:
                append();
                break;
            case 3:
                rev();
                break;
            case 4:
                linearSearch();
                break;
            case 5:
                delet();
                break;
            case 6:
                display();
                break;
            case 7:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice, try again.\n");
        }
    } while (choice != 7);

    return 0;
}
