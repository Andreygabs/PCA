#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char word[100];

    printf("Type a word. ");
    scanf("%s", word);

    reverse(word);
    no_vowel(word);
    repeat(word);
    del(word);

    return 0;
}

int reverse(char string[])
{
    printf("\n1. Reverse = ");

    for (int i = strlen(string); i >= 0; i--)
    {
        printf("%c", string[i]);
    }
}

int no_vowel(char string[])
{
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'A' || string[i] == 'I' || string[i] == 'U' || string[i] == 'E' || string[i] == 'O')
        {
            string[i] = ' ';
        }

        if (string[i] == 'a' || string[i] == 'i' || string[i] == 'u' || string[i] == 'e' || string[i] == 'o')
        {
            string[i] = ' ';
        }
    }
    printf("%s", string);
}

int repeat(char string[])
{
    char ch[1];
    int count = 0;

    printf("Type a character. ");
    scanf("%s", ch);

    for (int i = 0; i < strlen(string); i++)
    {
        if (ch[0] == string[i])
        {
            count++;
        }
    }

    printf("%s appears %i times in '%s'", ch, count, string);
}

int del(char string[])
{
    char ch[1];

    printf("Type a character. ");
    scanf("%s", ch);

    printf("'%s' without '%c' is:", string, ch);

    for (int i = 0; i < strlen(string); i++)
    {
        if (ch[0] == string[i])
        {
            string[i] = ' ';
        }
    }

    printf("%s", string);
}