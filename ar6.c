#include <stdio.h>
int main() 
{
   char str1[100],str2[100],str3[100];
   int i = 0, j = 0;
   printf("Enter first string: ");
   scanf("%s", str1);
   printf("Enter second string: ");
   scanf("%s", str2);
     while (str1[i] != '\0') 
     {
        str3[j] = str1[i];
        i++;
        j++;
     }
      i = 0;
          while (str2[i] != '\0') 
          {
           str3[j] = str2[i];
               i++;
               j++;
          }
         str3[j] = '\0';
   printf("Concatenated string is %s", str3);
 }
                                                                                                        
                                                                                                        

