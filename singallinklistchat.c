#include <stdio.h>
#include <stdlib.h>

// Define the structure for the linked list node
struct node {
    int data;
    struct node *next;
};

// Initialize the head of the list to NULL (i.e., an empty list)
struct node *head = NULL;

// Function to implement and create a linked list by adding new nodes
void implemention() {
    struct node *nw, *temp;
    int count = 0;
    int ch = 1;

    // Loop to keep adding nodes until user stops
    while (ch) {
        nw = (struct node*)malloc(sizeof(struct node)); // Allocate memory for new node
        printf("Enter the data: ");
        scanf("%d", &nw->data); // Input data for the node
        nw->next = NULL; // Set the next pointer to NULL
        
        // If the list is empty, set the first node
        if (head == NULL) {
            head = temp = nw;
        } else {
            // Otherwise, link the new node to the current list
            temp->next = nw;
            temp = nw;
        }
        
        // Ask if the user wants to continue adding nodes
        printf("Do you want to continue? Press 0 to stop or 1 to continue: ");
        scanf("%d", &ch);
    }

    // Print the linked list and count the nodes
    temp = head;
    while (temp != NULL) {
        printf("%d\t", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nNumber of nodes: %d\n", count);
}

// Function to add a node at the beginning of the list
void add_of_begening() {
    struct node *nw;
    int num;
    nw = (struct node*)malloc(sizeof(struct node)); // Allocate memory for new node
    printf("Enter the number to add at the beginning: ");
    scanf("%d", &num);
    nw->data = num; // Set the data
    nw->next = head; // Link the new node to the current head
    head = nw; // Update head to point to the new node
}

// Function to delete a node by its value
void delet() {
    if (head == NULL) { // If the list is empty
        printf("List is empty\n");
        return;
    }

    struct node *temp = head, *old = NULL;
    int key;
    printf("Enter the number to delete: ");
    scanf("%d", &key);

    // Traverse the list to find the node with the given key
    while (temp != NULL) {
        if (temp->data == key) { // If found
            if (temp == head) { // If it's the first node
                head = temp->next; // Update head
            } else {
                old->next = temp->next; // Bypass the node
            }
            free(temp); // Free the memory
            printf("Element deleted\n");
            return;
        }
        old = temp;
        temp = temp->next;
    }

    printf("Element not found in the list\n");
}

// Function to print the entire list
int printe() {
    int count = 0;
    struct node *temp = head;

    if (temp == NULL) {
        printf("List is empty, no nodes are there\n");
        count = 0;
    } else {
        // Traverse the list and print each node's data
        while (temp != NULL) {
            printf("%d\t", temp->data);
            temp = temp->next;
            count++;
        }
        printf("\nNumber of nodes: %d\n", count);
    }
    return 0;
}

// Function to append a node at the end of the list
void append() {
    struct node *temp, *nw;
    int numb;
    
    nw = (struct node*)malloc(sizeof(struct node)); // Allocate memory for new node
    printf("Enter the number of new node data: ");
    scanf("%d", &numb);
    nw->data = numb;
    nw->next = NULL;

    if (head == NULL) { // If the list is empty
        head = nw;
    } else {
        temp = head;
        // Traverse to the last node
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nw; // Add the new node at the end
    }
}

// Function to add a node at a specific position
void any_pos_node_add() {
    int num, pos;
    printf("Enter the position of node: ");
    scanf("%d", &pos);

    if (pos < 1) { // Check for valid position
        printf("Invalid position!\n");
        return;
    }

    struct node *temp = head;
    struct node *nw = (struct node*)malloc(sizeof(struct node)); // Allocate memory for new node
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    nw->data = num;

    if (pos == 1) { // If position is at the beginning
        nw->next = head;
        head = nw;
        return;
    }

    // Traverse to the position where the node should be inserted
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("The list has fewer than %d nodes, unable to insert\n", pos);
        free(nw); // Free the memory if position is invalid
    } else {
        nw->next = temp->next;
        temp->next = nw;
    }
}

// Function to print the list in reverse order
void rev_print(){
    struct node *temp;
    int count = 0;
    int arr[count];
    temp = head;

    // Store data in an array for reverse printing
    while (temp != NULL) {
        arr[count] = temp->data;
        count++;
        temp = temp->next;
    }

    // Print the data in reverse order
    for (int i = count - 1; i >= 0; i--) {
        printf("%d\t", arr[i]);
    }
}

// Function to reverse the entire linked list
void rev(){
    struct node *x, *y, *z;
    x = head;
    y = NULL;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    // Reverse the pointers to reverse the list
    while (x != NULL) {
        z = y;
        y = x;
        x = x->next;
        y->next = z;
    }
    head = y; // Update head to point to the new first node
}

// Function to sort the list using bubble sort
void shorting(){
    struct node *temp = head;
    int arr[20], n = 0, i, j, temp1;

    // Store the data in an array
    while (temp != NULL) {
        arr[n] = temp->data;
        n++;
        temp = temp->next;
    }

    // Bubble sort to sort the array
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                temp1 = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp1;
            }
        }
    }

    // Assign sorted data back to the linked list nodes
    temp = head;
    for (i = 0; i < n; i++) {
        temp->data = arr[i];
        temp = temp->next;
    }
}

// Main function that provides a menu-driven interface
int main() {
    int choice;

    while (choice != 11) {
        printf("\nMenu:\n");
        printf("1. Implement the linked list\n");
        printf("2. Add node at the beginning\n");
        printf("3. Append node at the end\n");
        printf("4. Delete a node\n");
        printf("5. Insert node at a specific position\n");
        printf("6. Print the list\n");
        printf("7. Print the list in reverse order\n");
        printf("8. Reverse the linked list\n");
        printf("9. Sort the list\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Switch case to handle the user's choice
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
                 shorting();
                 break;
            case 10:
                printf("Exiting...\n");
                exit(1);
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}
