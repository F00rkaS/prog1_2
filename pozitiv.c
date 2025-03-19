#include <stdio.h>


void kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", tomb[i]);
    }
    puts("");
}

void pozitiv(int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        if (tomb[i] < 0)
        {
            tomb[i] = tomb[i] * -1;
        }
        
    }
}

int main()
{
    int szamok[10] = {9, 8, -6, -4, 3, 2, -4, 7, 1, -5 };
    int meret = 10;

    kiir(meret, szamok);
    pozitiv(meret, szamok);
    kiir(meret, szamok);

    return 0;
}