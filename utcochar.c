#include <stdio.h>
#include <string.h>
#include "prog1.h"

int rfind_char(string s, char c)
{
    int meret = strlen(s);
    int lastindex = -1;
    for (int i = 0; i < meret ; i++)
    {
        if (s[i] == c)
        {
            lastindex =  i;
        }
    }
    return lastindex;
}


int main()
{
    int index = rfind_char("abba", 'c');
    printf("%d\n", index);

    return 0;
}
