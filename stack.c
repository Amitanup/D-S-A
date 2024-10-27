#include<stdio.h>
#include<stdlib.h>
struct stack
{
int arr[10];
int top;
};
struct stack *s;
// s=(struct stack *);
s->top=-1;


void push();
void pop();
void display();
void main(){
    int num=1,exp;
    printf("Enter the number of function \n ");
    scanf("%d",&exp);
    printf("--prass the 1 ->%d number-- \n 1. push the number \n 2. pop the number \n 3. disply the number \n",exp);

    while (num)
    {
     switch (exp)
     {
     case 1:
        push();
        break;
    case 2:
    pop();
    case 3:
    display();
     
     default:
        break;
     }
     printf("Enter the number eiter 0 & eiter 1");
     scanf("%d",&num);
    }

    

}