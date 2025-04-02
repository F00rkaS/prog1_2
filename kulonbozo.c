#include <stdio.h>

int main()
{
    int szamok[100] = {0};
    int szam;
    int diff = 0;

    printf("Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!\n");
    printf("Szám: ");
    while (1 == 1)
    {
        scanf("%d", &szam);
        if (szam == 0)
        {
            break;
        }
        else if (szam < 1 || szam > 99)
        {
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
            printf("Szám: ");
            continue;
        }
        else
        {
            szamok[szam] = 1;
        }
        printf("Szám: ");
    }

    for (int i = 0; i < 100; i++)
    {
        if (szamok[i] == 1)
        {
            diff++;
        }
    }

    printf("%d db különböző szám lett megadva.\n", diff);
    printf("Ezek (növekvő sorrendben): ");

    for (int i = 1; i <= 99; i++)
    {
        if (szamok[i] == 1)
        {
            printf("%d", i);
            diff--;
            if (diff > 0)
            {
                printf(", ");
            }
        }
    }
    puts(" ");

    return 0;
}