#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[100];

    printf("String: ");
    fgets(str1, sizeof(str1), stdin);

    printf("\nString size: %d\n", strlen(str1));
    
    for (int i = 0; i < strlen(str1) - 1; i++) {
        if (str1[i] != ' ') {
            str1[i] += 3;
        }
    }

    printf("Result: ");
    for (int i = 0; i < strlen(str1) - 1; i++) {
        printf("%c", str1[i]);
    }

    return 0;
}