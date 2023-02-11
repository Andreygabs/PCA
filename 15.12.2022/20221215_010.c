# include <stdio.h>

int main()
{
    float height, weight, ideal;

    printf("Input your height: ");
    scanf("%f", &height);

    printf("Input your weight: ");
    scanf("%f", &weight);

    ideal = (72.7*height) - 58;

    printf("Your ideal weight is %.2f", ideal);

    return 0;
}
