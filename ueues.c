#include<stdio.h>
#include<stdlib.h>
#define max 10
int arr[max],rear=-1,fornt=-1,num;
void insart(){
    
    if (rear==max-1)
    {
        printf("Queae is full no inserstion operatio : ");
        return;
    }
    else{
        rear++;
        printf("Enter the number of inserstion in Queas:");
        scanf("%d",&num);
        arr[rear]=num;
        if (fornt==-1)
        {
          a  fornt++;
            fornt=0;
        }
        
    }
    
};

void delet(){
    if (fread==-1)
    {
        /* code */
    }
    
   
    
};
void desply();
void main(){
    int ex,ch;
    printf("Enter choes :\n 1. insersation the element :\n");
    do
    {
       
    switch (ex)
    {
    case 1:
    insart();
        
        break;
    case 2:
    delet();
    break;
    case 2:
    desply();
    break;
    
    default:
        break;
    }
printf("Enter the number of 1 & 0 :");
scanf("%d"&ch);
    
    } while (ch);

}