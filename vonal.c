#include <stdio.h>
#include <string.h>
#include "prog1.h"

void line(char c, int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%c", c);
    }
    puts(" ");
}



int main()
{
    printf("hello\n");
    line('-', 40);
    printf("world\n");

    return 0;
}
