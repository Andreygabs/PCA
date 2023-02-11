#include <stdio.h>

int m[5][5] = {{1, 1, 1, 1, 1},
               {2, 2, 2, 2, 2},
               {3, 3, 3, 3, 3},
               {4, 4, 4, 4, 4},
               {5, 5, 5, 5, 5}};

int sLinha = 0, sColuna = 0, sD1 = 0, sD2 = 0;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sLinha += m[i][j];
        }
    }
    printf("Sum L = %i \n", sLinha);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sColuna += m[i][j];
        }
    }
    printf("Sum C = %i \n", sColuna);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (m[i] == m[j])
            {
                sD1 += m[i][j];
            }
        }
    }
    printf("Sum D1 = %i \n", sD1);

    for (int i = 0; i < 5; i++)
    {
        sD2 += m[5 - 1 - i][5 - 1 - i];
    }
    printf("Sum D2 = %i \n", sD2);

    if (sLinha == sColuna && sD1 == sD2 && sLinha == sD1)
    printf("\nMagic Square!");
    else
    printf("\n Not a magic square");
    

    return 0;
}