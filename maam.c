#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double func(double x)
{
  return pow(x, 3) - 4 * x - 9;
}
double e=0.01,c;
int main(){
   double a = 2, b = 3, c; 
    double e = 0.0001; 
    printf("tha used function is x^3-2x^2+3\n");
    printf("a=%lf\n",a);
    printf("b=%lf\n",b);
    if (func(a)*func(b)>=0)
    {
        printf("incorreet a and b");
        return 1;

    }
    c=a;
    while ((b-a)>=e)
    {
        e=(a+b)/2;
        if (func(e)==0.0)
        {
            printf("root =%lf\n",c);
            break;
        }
        else if (func(e)*func(a)<0)
        {
            printf("root=%lf\n",e);
            b=e;
        } 
        else
        {
         printf("root=%lf\n",e);
         a=e;

        }
               
    }
    
    
    
return 0;
}