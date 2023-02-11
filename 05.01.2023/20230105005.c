#include <stdio.h>

int fn, number;
int f1 = 0, f2 = 1;

int Fibo() {
    
    for (int i = 2; i <= number+1; i++) {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }

    printf("Fn = [%i]", f1);

    return fn;
}


int main(int argc, char const *argv[])
{
    printf("Input the position 'n': ");
    scanf("%i", &number);

    Fibo();
    
    return 0;
}
