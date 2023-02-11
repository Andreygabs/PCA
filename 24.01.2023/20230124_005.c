#include <stdio.h>

int n, qt, factorial = 1;
int array[100] = {};

void fact()
{
    for (int i = 1; i <= qt; i++)
    {
        printf("Typa number. ");
        scanf("%i", &array[i]);

        for (factorial = 1; array[i] > 1; array[i]--)
        {
            factorial *= array[i];
        }

        array[i] = factorial;
    }

    printf("Factorial = ");

    for (int i = 1; i <= qt; i++)
        {
            printf("[%i]", array[i]);
        }
}

int main(int argc, char const *argv[])
{
    printf("Interval = ");
    scanf("%i", &qt);

    fact();

    return 0;
}