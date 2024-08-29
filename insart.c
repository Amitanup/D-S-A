#include<stdio.h>
void main(){
    int a[10],i,n,pos,value;
    printf("\n Enter the number of tream : ");
    scanf("%d", &n);
    printf("\n Enter the %d number :", n);
    for (i = 0; i<n; i++)
    {
        scanf("%d ",&a[i]);
    }
    printf("\n before insart the element number");
    for ( i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n Enter the position of the number: ");
scanf("%d", &pos);

printf("\nEnter the value to insert: ");
scanf("%d", &value);

    for ( i=n; i >=pos; i--)
    {
        a[i]=a[i-1];
        
    }
    a[pos-1]=value;
    printf("\n after insart the value:");
    for (i=0;i<=n+1;i++)
    {
        printf("%d ",a[i]);
    }
    
    
    
}