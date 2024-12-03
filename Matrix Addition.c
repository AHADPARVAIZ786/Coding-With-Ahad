#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[3][3], b[3][3], c[3][3], i, j;

    printf("\n Enter the Value of 1st Matrix:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("\nEnter the Value of [%d][%d] =", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n Enter the Value of 2nd Matrix:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("\nEnter the Value of [%d][%d] =", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nSum of Matrix is:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
}
