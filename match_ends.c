#include <stdio.h>
#include <string.h>
#include "prog1.h"

int match_ends(int n, string words[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string szo = words[i];
        if (strlen(szo) > 2 && szo[0] == szo[strlen(szo-1)])
        {
            count++;
        }
        
    }
    return count;
    
}

int main()
{
    string szavak[] = {"aba", "xyz", "aa", "xfx", "bbb"};
    int szavak_meret = 5;

    int megfelel = match_ends(szavak_meret, szavak);

    for (int i = 0; i < szavak_meret; i++)
    {
        puts(szavak[i]);
    }
    
    printf("%d\n", megfelel);

    return 0;
}
