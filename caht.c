#include <stdio.h>
#include <stdlib.h>

struct append1 {
    int data;
    struct append1* next;
};

void append(struct append1** head) {
    struct append1* nw;
    struct append1* temp = *head;
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    // Allocate memory for the new node
    nw = (struct append1*)malloc(sizeof(struct append1));
    nw->data = num;
    nw->next = NULL;

    // If the list is empty, make the new node the head
    if (*head == NULL) {
        *head = nw;
    } else {
        // Traverse to the last node of the list
        while (temp->next != NULL) {
            temp = temp->next;
        }
        // Append the new node at the end of the list
        temp->next = nw;
    }
}

// Function to print the linked list
void printList(struct append1* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct append1* head = NULL;
    int choice;

    // Loop to append multiple nodes to the list
    do {
        append(&head);
        printf("Do you want to add another node? (1 for yes / 0 for no): ");
        scanf("%d", &choice);
    } while (choice);

    // Print the linked list
    printf("Linked list: ");
    printList(head);

    return 0;
}
