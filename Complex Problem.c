#include<stdio.h>
 void main() {
   int i = 0;
   int j = 0;
   int x = i++ - ++i + ++i * j + ++j;
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("x = %d\n", x++);
    printf("x = %d\n", ++x);
}
