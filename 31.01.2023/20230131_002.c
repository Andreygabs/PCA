#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char cars[6][20];
    int consumption[5];
    int menor;

    for (int i = 0; i < 5; i++)
    {
        printf("Input the car model [%i]. ", i);
        scanf(" %s", cars[i]);
        fflush(stdin);
    }
    // printf("%s", cars[5]);

    for (int i = 0; i < 5; i++)
    {
        printf("Input [%s]'s consumption. ", cars[i]);
        scanf(" %i", &consumption[i]);
        fflush(stdin);
    }

    menor = consumption[0];

    int j = 0;

    for (int i = 0; i < 5; i++)
    {
        //printf("Consumo = %i \n", consumption[i]);
        if (consumption[i] < menor)
        {
            j=i;
        }
    }
    printf("\n Most economic car: %s\n", cars[j]);

        for (int i = 0; i < 5; i++)
    {
        printf("[%s] consumes approximately %i L/KM. \n", cars[i], 1000/consumption[i]);
    }
    return 0;
}