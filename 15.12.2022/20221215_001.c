#include <stdio.h>

int main()
{
    float n1,n2, sum;

    printf("Value 1: ");
    scanf("%f", &n1);

    printf("Value 2: ");
    scanf("%f", &n2);

    sum = n1 + n2;

    printf("sum = %.2f", sum);

    return 0;
}
