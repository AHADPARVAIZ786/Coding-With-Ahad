#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, i = 0;
    do
    {
    printf("Enter a Number :");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is a Positive Number\n", num);
    }
    else if (num < 0)
    {
        printf("%d is a Negative Number\n", num);
    }
    else if (num == 0)
    {
        printf("%d is Zero\n", num);
    }
    else
    {
        printf("Invalid Number!");
    }
    i++;
}
while (i < 1000);
}
