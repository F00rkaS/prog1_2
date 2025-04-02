#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"

int main(int argc, string argv[])
{
    if (argc < 3 || argc > 3)
    {
        printf("Két paramétert (számot) kell megadni.\n");
    }
    else
    {
        string s = argv[1];
        string z = argv[2];
        int x = atoi(s)+atoi(z) ;
        printf("%d\n", x);
    }


    return 0;
}
