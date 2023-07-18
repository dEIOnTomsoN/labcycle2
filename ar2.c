#include<stdio.h>
int main()
{ 
  int i=0,n;
  printf("Enter number of elements\t");
  scanf("%d",&n);
  float avg,d,sum=0,ar[50];
  printf("Enter %d elements\t",n);
    for(i=0;i<n;i++)
     {
       scanf("%f",&ar[i]);
     
     }
     for(i=0;i<n;i++)
     {
       sum=sum+ar[i];
     }
     avg=sum/n;
     printf("the average =%f and the deviations \n",avg);
        for(i=0;i<n;i++)
     {    
     d=ar[i]-avg;
     printf("with %f is %f\n",ar[i],d );
    d=0;
     }
     }
