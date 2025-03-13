#include <stdio.h>

int main()
{
    int magassag;
    printf("Kérek egy pozitív egész páratlan számot: ");
    scanf("%d",&magassag);

    if  (magassag%2 == 0)
    {
        printf("Nem megfelelő bemenet\n");
        return 1;
    }

    int csillag=1;
    int szünet=(magassag-1)/2;

        while (csillag<=magassag)
        {
            for (int j = 0; j < szünet; j++)
            {
                printf(" ");
            }
            for (int k = 0; k < csillag; k++)
            {
                printf("*");
            }
            printf("\n");
            csillag=csillag+2;
            szünet=(magassag-csillag)/2;
        }

        csillag=csillag-4;
        szünet=(magassag-csillag)/2;

        while (csillag>=1)
        {
            for (int j = 0; j < szünet; j++)
            {
                printf(" ");
            }
            for (int k = 0; k < csillag; k++)
            {
                printf("*");
            }
            printf("\n");
            csillag=csillag-2;
            szünet=(magassag-csillag)/2;
        }
        
    return 0;
}