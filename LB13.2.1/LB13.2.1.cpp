#include <stdio.h>
#include "var.h"

#define Z 2
#define SQR(x) (x) * (x)
#define MAX(y,z) ((y) > (z)) ? (y) : (z)
#define MIN(y,z) ((y) < (z)) ? (y) : (z)
#define ABS(res) ((res) > 0) ? (res) : (res) * -1 

#define PRINTI(w) puts("control output"); \
        printf (#w"= %f\n",(float)w)

int main()
{
    puts("Lab 13.2. Using macros and preprocessing directive");

    PRINTI(Z);

#if Z == 1
    puts("define maximum of two numbers");
    puts("Input 2 integer numbers");
    scanf_s("%d", &x);
    PRINTI(x);
    scanf_s("%d", &y);
    PRINTI(y);
    w = MIN(SQR(x - y), ABS(x - y));
#else
    {
        puts("define maximum of three numbers");
        puts("Input 3 integer numbers");
        scanf_s("%d", &x);
        PRINTI(x);
        scanf_s("%d", &y);
        PRINTI(y);
        scanf_s("%d", &z);
        PRINTI(z);
        w = MAX(x + SQR(y), z + SQR(x));
    }
#endif

    printf("%d\n", w);
}
