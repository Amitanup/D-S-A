//Newton backward difference interpolation formula

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int fact(int n)
{  int v;
   if(n==0)
      v=1;
   else
      v=n*fact(n-1);
   return v;
}
int main()
{  int i,n,j;
   float t,h,x[20],y[20],diff[20][20],term1,sum=0.0,p,prod=1.0,value;
   printf("Number of data point= ");
   scanf("%d",&n);
   printf("Enter the data points pairwise (x,y): \n");
   for(i=0;i<n;i++)
      scanf("%f %f",&x[i],&y[i]);
   h=x[1]-x[0];
   term1=y[n-1];
   //Forward difference table formulation
   for(i=1;i<n;i++)
      for(j=n-1;j>=i;j--)
      {  diff[i][j]=(y[j]-y[j-1]);
         y[j]=diff[i][j];
      }
   printf("Enter the interpolating point x=");
   scanf("%f",&t);
   p=(t-x[n-1])/h;
   for(i=1;i<n;i++)
   {  prod=prod*(p-1+i);
      sum=sum+(prod*diff[i][n-1])/fact(i);
      printf("diff[%d][%d]=%f\n",i,n-1,diff[i][n-1]);
   }
   value=term1+sum;
   printf("interpolated value=%f",value);
}