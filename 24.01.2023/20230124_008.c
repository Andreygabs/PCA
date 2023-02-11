#include <stdio.h>

int n = 0;
int x[999] = {};
int y[999] = {};

void operator()
{
    int sum;
    
    for (int k = 0; k < n; k++)
    {
        sum += x[k] * y[k];
        printf("R = %i \t", sum);
    }
}

int main(int argc, char const *argv[])
{
    printf("Input 'n' interval. ");
    scanf("%i", &n); 

    for (int i = 0; i < n; i++)
    {
        printf("Input the value [%i] for Vx. ", i);
        scanf("%i", &x[i]);
    }

    for (int j = 0; j < n; j++)
    {
        printf("");

        printf("Input the value [%i] for Vy. ", j);
        scanf("%i", &y[j]);
    }

    operator();

    return 0;
}
