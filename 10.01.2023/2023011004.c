#include <stdio.h>
#include <math.h>

int decimal(int number)
{
    int c = 0, resto = 0, multi = 0, sum = 0;

    printf("[%d] = ", number);

    while (number > 0)
    {
        resto = number % 10;
        number = number / 10;
        multi = resto * (pow(2, c));
        sum += multi;
        c++;
    }

    printf("%d;\n", sum);
}

int main(int argc, char const *argv[])
{
    int number;

    printf("Input a binary number: ");
    scanf("%d", &number);
    decimal(number);

    return 0;
}