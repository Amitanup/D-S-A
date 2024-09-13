void shorting(){
struct node *i, *j;
    int temp;

    // if (head == NULL) { 
    //     printf("The list is empty.\n");
    //     return;
    // }

    for (i = head; i != NULL; i = i->next) { 
        for (j = i->next; j != NULL; j = j->next) { 
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}