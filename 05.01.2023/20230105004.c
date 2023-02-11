#include <stdio.h>

int number, sum = 1;

int Factorial(n) {

    for (int i = 1; i <= n; i++) {
        sum += sum*(i-1);
    }
    
    return sum;
}

int main(int argc, char const *argv[])
{
    printf("Input a number: ");
    scanf("%i", &number);

    Factorial(number);
    printf("The factorial of [%i] is equal to [%i]", number, sum);

    return 0;
}
