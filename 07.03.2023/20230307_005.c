#include <stdio.h>

int main()
{
    int a, b, c, igual;
    printf("Digite tres valores inteiros: \n");
    scanf("%d %d %d", &a, &b, &c);

    igual = ordenar(&a, &b, &c);

    printf("Valores ordenados: %d %d %d\n", a, b, c);
    if (igual == 1)
    {
        printf("Os tres valores sao iguais\n");
    }
    else
    {
        printf("Existem valores diferentes\n");
    }
    return 0;
}

int ordenar(int *a, int *b, int *c)
{
    int temp;
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a == *b && *b == *c)
    {
        return 1;
    }
    return 0;
}
