#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char nomes[4][30];
    char equipe[5][30];

    for (int a = 0; a < 5; a++)
    {
        printf("EQUIPE [%I]: \n", a);
        for (int i = 0; i < 4; i++)
        {
            printf("Insira o nome e sobrenome do aluno. ");
            scanf("%s", nomes[i]);
        }
        equipe[a][30] =  nomes[a];
        equipe[sizeof(equipe)][30] = '\0';
    }
    
    for (int j = 0; j < 4; j++)
    {
        printf("%s \t", equipe[j]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("Buscar aluno: ");
        scanf("%s", nomes[i]);
    }

    return 0;
}