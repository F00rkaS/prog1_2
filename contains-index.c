#include <stdio.h>

void constains(int n, int tomb[], int keres)
{
    for (int i = 0; i < n; i++)
    {
        if (tomb[i] == keres)
        {
            printf("Tartalmazza a számot\n");
            break;
        }
        
    }
}

int indexe(int n, int tomb[], int keres)
{
    for (int i = 0; i < n; i++)
    {
        if (tomb[i] == keres)
        {
            return i;
        }
        
    }
    return -1;
}


int main()
{
    int szamok[10] = {9, 8, 6, 4, 3, 2, 4, 7, 1, 5 };
    int meret = 10;

    constains(meret, szamok, 10);
    printf("Az index: %d\n", indexe(meret, szamok, 10));

    return 0;
}