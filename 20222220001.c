#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, sum = 0;

    for (int i = 1; i < 6; i++)
    {
        printf("Type a number: ");
        scanf("%i", &n);

        sum += n;
    }

    printf("\n Sum = %i", sum);
    return 0;
}