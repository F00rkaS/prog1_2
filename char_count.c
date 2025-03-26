#include <stdio.h>
#include <string.h>
#include "prog1.h"

int char_count(string s, char c)
{
    int meret = strlen(s);
    int count = 0;
    for (int i = 0; i < meret ; i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    return count;
}


int main()
{
    int count = char_count("bill", 'a');
    printf("%d\n", count);


    return 0;
}
