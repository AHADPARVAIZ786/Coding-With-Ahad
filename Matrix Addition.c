#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    int c[2][2];
    int i, j;

    printf("\nSum of Matrix is:\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }

}
