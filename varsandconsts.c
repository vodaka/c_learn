#include <stdio.h>
#include <stdlib.h>
/* The next line is a method for define a constant*/
#define MY_AGE 30
/* The next line is another method for define a constant*/
const int MY_AGE1 = 31;
int main(void)
{
    printf("My age is %d\n", MY_AGE1);
    int a = 10;
    printf("The number is : %d\n", a);
    a = 11;
    printf("The number now is : %d\n", a);
    printf("My age is :%d\n", MY_AGE);
    return 0;
}
