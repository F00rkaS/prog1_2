#include <stdio.h>
#include <string.h>
#include "prog1.h"

#define SIZE 26

void feltolt(char tomb[])
{
    for (int i = 0; i <= SIZE; i++)
    {
        tomb[i] = 'a' + i;

        if (i == SIZE)
        {
            tomb[i] = '\0';
        }
    }
    
    string abece = tomb;
    printf("%s \n",abece);
}

int main()
{
    char abc[SIZE + 1];
    feltolt(abc);

    return 0;
}