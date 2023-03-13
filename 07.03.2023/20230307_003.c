#include <stdio.h>

int main(int argc, char const *argv[])
{
    int inteiro = 0;
    float real = 0;
    char ch = 'A';

    printf("ANTES:  %i %f %c", inteiro, real, ch);

    int *p1 = &inteiro;
    *p1 = 1;
    float *p2 = &real;
    *p2 = 1.1;
    char *p3 = &ch;
    *p3 = 'Z';

    printf("\nDEPOIS:  %i %.2f %c", *p1, *p2, *p3);

    return 0;
}
