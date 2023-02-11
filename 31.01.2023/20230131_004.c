#include <stdio.h>
#include <string.h>

char S1[20], S2[20];

int main(int argc, char const *argv[])
{
    input();
    size();
    comparator();
    concat();
    reverse();
    substr();

    return 0;
}

void input() 
{
    printf("Type a string. ");
    scanf("%s", &S1);
}

void size() 
{
    printf("\nS1's Size: %i", strlen(S1));
}

void comparator() 
{
    printf("Type a new string to be compared. ");
    scanf("%s", &S2);

    if (strcmp(S1, S2) != 0)
        printf("\nS1 and S2 are different. ");
    else if (strcmp(S1, S2) == 0)
        printf("\nS1 and S2 are equal. ");
    if (strcmp(S1, S2) != 0 && strcmp(S1, S2) < 0)
        printf("\nS1 precedes S2. ");
    if (strcmp(S1, S2) != 0 && strcmp(S1, S2) > 0)
        printf("\nS1 proceeds S2. ");
}

void concat() 
{
    printf("Type a new string to be concatenated. ");
    scanf("%s", &S2);

    printf("%s", strcat(S1, S2)); 
}

void reverse()
{
    printf("Reverse: ");

    for (int i = strlen(S1) - 1; i >= 0; i--)
    {
        printf("%c", S1[i]);
    }
}

void substr()
{
    int c = 0;

    printf("Type a new string. ");
    scanf("%s", &S2);

    for (int i = 0; i < strlen(S1) - 1; i++)
    {
        if (S1[i] == S2[i] && S2[i + 1] != S1[i + 1])
            continue;

        S2[i + 1] = S2[i];

        if (S1[i + 1] == S2[i + 1])
        {
            c++;
        }

        printf("c = %i\t", c);
    }

    if (c == strlen(S2))
        printf("S2 is a substring of [%s]", S2, S1);

    else
        printf("S2 is not a substring of [%s]", S1);
}