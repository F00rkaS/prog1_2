#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void kiiras(int sima[], int abs[], int n)
{
    printf("A bevitt számok abszolútértékei: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", abs[i]);
        if (i != n - 1) 
        {
            printf(", ");
        }
    }
    puts(" ");

    printf("A megadott számok: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d", sima[i]);
        if (i != n - 1) 
        {
            printf(", ");
        }
    }
    puts(" ");
}

int main()
{
    int n;
    printf("Hány db számot szeretnél bevinni? \n");
    scanf("%d", &n);

    int sima[n];

    for (int i = 0; i < n; i++)
    {
        printf("%d. szám: ", i + 1);
        scanf("%d", &sima[i]);
    }

    int abs[n];
    for (int i = 0; i < n; i++)
    {
        if (sima[i] < 0)
        {
            abs[i] = sima[i] * -1;
        }
        else
        {
            abs[i] = sima[i];
        }
    }

    kiiras(sima, abs, n);

    return 0;
}