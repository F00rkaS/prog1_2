#include <stdio.h>


void kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n-1; i++)
    {
        printf("%d, ", tomb[i]);
    }
    printf("%d",tomb[n-1]);
    puts("");
}

int main()
{
    int szamok[10] = {9, 8, 6, 4, 3, 2, 4, 7, 1, 5 };
    int meret = 10;

    kiir(meret, szamok);

    return 0;
}