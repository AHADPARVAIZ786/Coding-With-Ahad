#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[3][2], transpose[2][3], i, j;

    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
        {
        printf("\nEnter the value of matrix [%d][%d] =", i+1, j+1);
        scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix is: \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of a Matrix is: \n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d \t", transpose[i][j]);
        }
        printf("\n");
    }
}
