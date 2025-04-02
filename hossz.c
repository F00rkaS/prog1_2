#include <stdio.h>
#include <string.h>

#define SIZE 300

int main()
{
    char szo[300];
    int leghosszabb = -1;
    int db_szavak = 0;
    
    printf("Adj meg szavakat '*' végjelig:\n");
    while (1 == 1)
    {
        printf("Szó: ");
        fgets(szo, SIZE, stdin);
        if (szo[strlen(szo) - 2] == '*')
        {
            break;
        }
        
        db_szavak++;
        
        int hossz = strlen(szo);
        if (leghosszabb < hossz) 
        {
            leghosszabb = hossz - 1;
        }
    }
    
    printf("%d db szót adtál meg. A leghosszabb szó %d karakterből áll.\n", db_szavak, leghosszabb);
    
    return 0;
}