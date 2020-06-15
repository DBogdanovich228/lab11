#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



const int n=3;
double a[3][3] ={{2.5,-3.12, -4.03},
         {0.61, 0.71, -0.05},
         {-1.03, -2.05, 0.87}};
 
double b[3]={-7.5, 0.44, -1.16};
 
int main()
{
system("chcp 1251>nul");
 
 int i,j,e;
 
 double x[3], c[3]={0,0,0};
 printf("\n");
 
for(e=1;e<8;e++)
  {
   printf("%d Iteracija:", e);
 for(i=0;i<n;i++)
  {   x[i]=0;
      for(j=0;j<n;j++)
   {
    if(i!=j)
    x[i]+=a[i][j]*c[j];
   }
   c[i]=(b[i]-x[i])/a[i][i];
   printf("%f ", c[i]);
  }
  printf("\n");
 
  printf("\n");
}
 
return 0;
}
