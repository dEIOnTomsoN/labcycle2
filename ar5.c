#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    int i,l,flag=0;
    printf("Enter a word: ");
    scanf("%s", word);

    l= strlen(word);

    for(i=0;i<l ;i++)
    {
        if(word[i]!= word[l-i-1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("%s is not  a palindrome\n", word);
    }    
    else
    {
        printf("%s is  a palindrome\n", word);
    }}

