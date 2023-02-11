#include <stdio.h>

int number, perfect, sum = 0;

void IfEven()
{ 

    printf("Input an even number: ");
    scanf("%i", &number);

    while (number % 2 != 0)
    {
        printf("This is not an even number! \n\n");

        printf("Input an even number: ");
        scanf("%i", &number);
    }
}

int IfPerfect()
{ 

    for (int i = 1; i < number; i++)
    {

        if (number % i == 0)
        {
            sum += i;
        }
    }

    if (number == sum) {
        printf("This is a perfect number!");
    } else
    {
        printf("This is not a perfect number.");
    }
    
}

int main(int argc, char const *argv[])
{
    IfEven();
    IfPerfect();
    return 0;
}
