#include <stdio.h>
int main()
{
    int a[50],i,n,se,k=0;
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter %d elements : ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the elememt to be searche");
    scanf("%d", &se);
     
    for(i=0; i<n; i++)                             
    {
        if(a[i]==se)                 
        { 
   k++;		 
        }
       } 
        if(k!=0)
      {  printf("element %d found %d times",se,k);
}         else
{
printf("element not found");
}}
