#include <stdio.h>

int min(const int n, const int tomb[])
{
    int min = tomb[0];
    for (int i = 1; i < n; i++)
    {
        if (tomb[i] < min)
        {
            min = tomb[i];
        }
        
    }
    return min;
}

int max(const int n, const int tomb[])
{
    int max = tomb[0];
    for (int i = 1; i < n; i++)
    {
        if (tomb[i] > max)
        {
            max = tomb[i];
        }
        
    }
    return max;
}

int main()
{
    int szamok[10] = {9, 8, 6, 4, 3, 2, 4, 7, 1, 5 };
    int meret = 10;

    printf("A tömb minimum erteke: %d\n",min(meret, szamok));
    printf("A tömb maximum erteke: %d\n",max(meret, szamok));

    return 0;
}