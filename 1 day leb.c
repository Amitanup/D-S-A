#include<stdio.h>
int main(){

    int x=5,y,z;
    printf(" print the x addaeress :%d\n",&x); 
    y=&x;
    printf("print the x addaeress : %u\n",y);
    z=&y;
    printf("print the x addaeress : %u",z);
    return 0;
}