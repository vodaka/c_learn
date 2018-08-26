#include <stdio.h>
#include <stdlib.h>
/* Given the effects of different OS or platform, use stdint.h to dismiss the
 * difference
 */
#include <stdint.h>

int main()
{
    /* Decimal system*/
    int a = 10;
    int b = -10;
    long c = 100; /*platform dependent takes 8 bytes for 64 bits , 4 bytes in 32 bits*/
    long long d = 1000; /* platform independent*/
    /* Binary system*/
    int e  = 0b100;
    printf("%d\n", e);
    /* Oct system*/
    int f = 012;
    printf("%d\n", f);
    /*Hex system*/
    int g = 0xb;
    printf("%d\n", g);

    int8_t h = 127;
    uint8_t i = 255;
    printf("h=%d,i=%d\n", h, i);

    return 0;
}
