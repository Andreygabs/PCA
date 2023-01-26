#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, soma = 0;
    for (int i = 1; i <= 50; i++)
    {
        printf("Digite um número:\n");
        scanf("%i", &n);

        if (n % 2 != 0)
        {
            soma = soma + n;
            printf("%i", soma);

        }
    }

    return 0;
}