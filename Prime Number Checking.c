#include<stdio.h>
int Print_Prime_Numbers(int num)
{
    if (num<=1) {
        return 0;
    }
    for (int i = 2; i * i<=num; i++)
    {
        return 0;
    }
    return 1;
}
void main()
{
    int num, j = 0;

    do
    {
    printf("Enter a number :");
    scanf("%d", &num);

    if (Print_Prime_Numbers(num))
    {
        printf("%d is a Prime Number\n", num);
    }
    else
    {
        printf("%d is Not a Prime Number\n", num);
    }
    j++;
}
    while (j<=100);
}

