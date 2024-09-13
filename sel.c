void shorting() {
    struct node *temp, *min, *i, *j;
    int tempData;

    // if (head == NULL) {
    //     printf("The list is empty.\n");
    //     return;
    // }

    for (i = head; i != NULL; i = i->next) {
        min = i;
        for (j = i->next; j != NULL; j = j->next) {
            if (j->data < min->data) {
                min = j;
            }
        }

        if (min != i) {
            tempData = i->data;
            i->data = min->data;
            min->data = tempData;
        }
    }

    // printf("The list has been sorted using Selection Sort.\n");
 }
