#include <stdio.h>
#include <string.h>
#include "prog1.h"

int constains_char(string s, char c)
{
    for (int i = 0; s[i] != '\0' ; i++)
    {
        if (s[i] == c)
        {
            return 1;
        }
    }
    return 0;
}


int find_char(string s, char c)
{
    int meret = strlen(s);
    for (int i = 0; i < meret ; i++)
    {
        if (s[i] == c)
        {
            return i;
        }
    }
    return -1;
}

char get_char(string prompt)
{
    char c;
    printf("%s", prompt);
    scanf("%c", &c);
    return c;
}

int main()
{
    string text = get_string("Text: ");
    char c = get_char("char: ");
    printf("'%c' indexe: %d\n", c, find_char(text, c));
    printf("%s\n", constains_char(text, c) ? "benne van" : "nincs benne");

    return 0;
}
