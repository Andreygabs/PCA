# include <stdio.h>

int main()
{
    float money, hours, salary, real_salary;
    float lion, inss, syndicate;

    printf("Input your money/h: ");
    scanf("%f", &money);

    printf("Input your hours worked: ");
    scanf("%f", &hours);

    salary = money*hours;
    
    lion = salary* 11/100;
    inss = salary* 8/100;
    syndicate = salary* 5/100;

    real_salary = salary - lion - inss - syndicate;

    printf("Your salary is: R$ %.2f \n", salary);
    printf("The lion took R$ %f from you \n", inss);
    printf("You paid R$ %.2f to the syndicate \n", syndicate);
    printf("Your liquid salary is: R$ %f \n", real_salary);

    return 0;
}
