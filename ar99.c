#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], mul[10][10], r, c, i, j, k,h,l;
    printf("The column of first matrix and Row of second matrix maust be same\n");
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &r, &c);
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &h, &l);
  
    printf("Enter the elements of first matrix\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the elements of second matrix\n");
    for (i = 0; i < h; i++)
        for (j = 0; j < l; j++)
            scanf("%d", &b[i][j]);
    printf("Product of the matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < l; j++) {
            mul[i][j] = 0;
            for (k = 0; k < c; k++)
                mul[i][j] += a[i][k] * b[k][j];
            printf("%d ", mul[i][j]);
        } if(j==r-1)
        printf("\n");
    }
   }
