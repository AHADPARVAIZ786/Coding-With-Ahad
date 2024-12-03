#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k;

    printf("\n Enter the Rows and Columns of 1st Matrix:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("\nEnter the Rows and Columns of [%d][%d] =", i, j);
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

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            c[i][j] = 0;
        }

    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            for (k=0; k<3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nMultiplication of Matrix is:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
}
