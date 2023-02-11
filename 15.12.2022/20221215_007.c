# include <stdio.h>

int main()
{
    float f, conv;

    printf("F = ");
    scanf("%f", &f);

    conv = 5*(f-32) / 9;
    
    printf("%f F = %.2f C", f, conv);

    return 0;
}
