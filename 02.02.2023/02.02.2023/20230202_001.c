#include <stdio.h>
#include <string.h>

char name[30];
char equipe[5][4][30];
char op = ' ';

int main()
{

    for (int a = 0; a < 5; a++)
    {
        printf("EQUIPE [%i]: \n", a);
        for (int i = 0; i < 4; i++)
        {
            setbuf(stdin, NULL);
            printf("Insira o nome do aluno %i. ", i + 1);
            scanf("%s", equipe[a][i]);
        }
    }

    setbuf(stdin, NULL);
    printf("\nDeseja pesquisar um aluno? [s] [n]\n");
    scanf("%c", &op);

    if (op == 's' || op == 'S')
        search();

    if (op == 'n' || 'N')
    {
        printf("\n\nEncerrando programa... ");
    }

    return 0;
}

void spesquisa()
{
    printf("\nDigite o aluno: ");
    scanf("%s", name);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (strcmp(equipe[i][j], name) == 0)
            {
                printf("equipe: %d.\n", i);
                return;
            }
        }
    }

    printf("Aluno nao encontrado.\n");
}