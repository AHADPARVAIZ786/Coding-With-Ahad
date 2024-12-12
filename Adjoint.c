#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[2][2]={{1,2},{3,4}};

    printf("Adjoint:\n");
    printf("%d\t%d\n", a[1][1],-a[0][1]);
    printf("%d\t%d\n", -a[1][0],a[0][0]);
}
