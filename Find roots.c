#include <stdio.h>
#include<math.h>
void main()
{
    float a,b,c,root1,root2;
    printf("Enter the value of a,b,c");
    scanf("%f\n%f\n%f", &a,&b,&c);

    root1=(-b+sqrt(b*b-4*a*c))/2*a;
    root2=(-b-sqrt(b*b-4*a*c))/2*a;

    printf("%f\n%f", root1,root2);

}
