#include <stdio.h>

void rendezett(int n, int tomb[])
{
    int igaz = 1;
    for (int i = 0; i < n; i++)
    {
        
        if (tomb[i] < tomb[i+1])
        {
            
        }
        else
        {
            printf("Nem rendezett a tömb\n");
            igaz = 0;
            break;
        }
        
    }
    if (igaz == 1)
    {
        printf("Rendezett a tömb\n");
    }
    
}



int main()
{
    int szamok[10] = {9, 8, 6, 4, 3, 2, 4, 7, 1, 5 };
    int meret=10;

    rendezett(meret, szamok);

    return 0;
}