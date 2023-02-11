# include <stdio.h>

int main(int argc, char const *argv[])
{
    float money, time, salary;

    printf("quanto vc ganha: ");
    scanf("%f", &money);

    printf("quanto vc trabalha: ");
    scanf("%f", &time);

    salary = money * time;

    printf("salario = %.2f", salary);

    return 0;
}
