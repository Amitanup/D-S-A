#include<stdio.h>
int main(){
    int n,i,j;
    int arr[20];
    printf("Entr the number of element:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
    for(j=0;j<n-i;j++){
     if (arr[j]>arr[j++])
     {
        temp=arr[j];
        arr[j]=arr[j++];
        a[j++]=temp;
     }
     
    }
    }
    
    
}