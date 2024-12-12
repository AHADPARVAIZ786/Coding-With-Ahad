#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[2][2]={{1,2},{3,4}};
    int det;               //det = determinant

    det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]); //a[0][0] ka mtlb h k a ki phli row ka 1st element jo k 1 h and 1st coloum ka 1st element jo k 1 h isi tarhan sb k liay

    printf("The determinant of matrix is: %d\n", det);
}
