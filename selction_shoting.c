#include<stdio.h>
void selaaction(){
    int a[20];
    int i,j,n=0,temp1;
    struct node *temp=head;
    while (temp!=NULL)
    {
        a[n]=temp->data;
        n++
        temp=temp->next;
    }
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {    
            temp1=a[j];
            a[j]=a[j+1];
            a[j+1]=temp1;
        }
        }

        
    }
    temp=head;
    while (temp!=NULL)
    {
     temp->data=a[n];
     n++;
     temp=temp->next;
    }
    
    
}