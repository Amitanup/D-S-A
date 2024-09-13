void sort_list() {
    struct node *temp = head;
    int arr[20], n = 0, i, j, temp1;
    while (temp != NULL) {
        arr[n] = temp->data;
        n++;
        temp = temp->next;
    }
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

    // Update the linked list with sorted data
    temp = head;
    for (i = 0; i < n; i++) {
        temp->data = arr[i];
        temp = temp->next;
    }

    printf("List sorted.\n");
}
