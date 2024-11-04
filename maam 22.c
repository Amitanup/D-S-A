
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void pivot(float mat[100][100], int m, int n) /m=the number of variable for which we want pivoting, n=no. of variable/
{	int i,j, tem[100];
	for(i=m;i<=n;i++)
	if(fabs(mat[m][m])<fabs(mat[i][m]))
	{	for(j=1;j<=n+1;j++)
		{	tem[j]=mat[m][j];
			mat[m][j]=mat[i][j];
			mat[i][j]=tem[j];
		}
	}
	for(i=1;i<=n;i++)
	{	for(j=1;j<=n+1;j++)
			printf("%f\t",mat[i][j]);
		printf("\n");
	}	
}

int main()
{   int i,j,m=1,n,l,dp;
    char t;
    float x[100][100],a[100][100],b[100],psum,asum,eps,e=100.0;
    void pivot(float [100][100], int, int);
    printf("No. of iteration given?(y/n): ");
    scanf("%c",&t);
    printf("\nEnter the no. of unknown:");
    scanf("%d",&n);
    printf("Enter the right hand side constants : \n");
    for(i=1;i<=n;i++)
        scanf("%f",&b[i]);
    printf("\nEnter the coefficients row wise : \n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%f",&a[i][j]);
    printf("Enter the initial approximation : \n");
    for(i=1;i<=n;i++) 
        scanf("%f",&x[i][0]);
    for(i=1;i<=n;i++)			/Augmented matrix/
		a[i][n+1]=b[i];
	 for(i=1;i<n;i++)
		pivot(a,i,n);
    if(t=='y')
    {	 printf("Enter the number of iterations :");
       scanf("%d",&l);
	    while(m<=l)
       {  for(i=1;i<=n;i++) 
          {  psum=0.0;
             asum=0.0;
             if(i==1)
                psum=0.0;
             else
             {  for(j=1;j<i;j++)
                   psum=psum+a[i][j]*x[j][m];
             }
             if(i==n)
                asum=0.0;
             else
             {  for(j=i+1;j<=n;j++)
                   asum=asum+a[i][j]*x[j][m-1];
             }
             x[i][m]=(b[i]-psum-asum)/a[i][i];
             printf("x[%d][%d]=%f\t",i,m,x[i][m]);
          }
          m++;
          printf("\n");
       }
    }
    else if(t=='n')
    {  printf("How many decimal places? ");
       scanf("%d",&dp);
       eps=pow(10,-dp);
       while(fabs(e)>eps)
       {  for(i=1;i<=n;i++) 
          {  psum=0.0;
             asum=0.0;
             if(i==1)
                psum=0.0;
             else
             {  for(j=1;j<i;j++)
                   psum=psum+a[i][j]*x[j][m];
             }
             if(i==n)
                asum=0.0;
             else
             {  for(j=i+1;j<=n;j++)
                   asum=asum+a[i][j]*x[j][m-1];
             }
             x[i][m]=(a[i][n+1]-psum-asum)/a[i][i];
             printf("x[%d][%d]=%f\t",i,m,x[i][m]);
          }
          printf("\n");
          e=(x[1][m]-x[1][m-1]);
          m++;
       }
    }    
}


// here the argument are euiispaced and x=38 degee lice at time end of the table so we use newtons interpoation formula 