#include <stdio.h>

int main()
{
    int magassag;
    printf("Kérem a magasságot: ");
    scanf("%d",&magassag);
    for (int i = 1; i <=magassag; i++)
    {
        int ures=magassag-i;
        int tegla=magassag-ures;
        
        for (int j = 0; j < ures; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < tegla; k++)
        {
            printf("#");
        }
        printf("  ");

        for (int k = 0; k < tegla; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    


    return 0;
}