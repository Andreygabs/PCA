#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *v;
    int qt;

    printf("Insira a quantidade de elementos do vetor. ");
    scanf("%i", &qt);

    // Alocando e lendo o vetor
    inputs(&v, qt);

    // Liberando a memoria alocada
    free(v);

    return 0;
}

int inputs(int *v, int qt)
{
    v = (int *)malloc(qt * sizeof(int));

    for (int i = 0; i < qt; i++)
    {
        printf("Insira o elemento %i do vetor. ", i);
        scanf("%d", &*(v + i));
        // printf("%d ", *(v+i));
    }

    comparate(v, qt);
}

int comparate(int **v, int qt)
{
    int maior = *v;
    int menor = *v;

    for (int i = 0; i < qt; i++)
    {
        if (*(v + i) > maior)
            maior = *(v + i);

        if (*(v + i) < menor)
            menor = *(v + i);
    }

    printf("Maior valor = %d\n", maior);
    printf("Menor valor = %d", menor);
}