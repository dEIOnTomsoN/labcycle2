#include<stdio.h>
int main()
{ 
  int i,n,nz=0,z=0,o,e;
  printf("Enter number of elements\t");
  scanf("%d",&n);
  int ar[n];
  printf("Enter %d elements\t",n);
    for(i=0;i<n;i++)
     {
       scanf("%d",&ar[i]);
     }
       for(i=0;i<n;i++)
          { 
            if(ar[i]==0)
             {
             z++;
             }
             
               else 
                {
                  nz++;
                }
                  if(ar[i]!=0)
                   {
                     if(ar[i]%2==0)
                       {
                         e++;
                       }
                          else
                            {
                              o++;
                            }
                   }
           }
  printf("nonzero=%d  zeros=%d even=%d odd=%d \t",nz,z,e,o);
}
         
       
