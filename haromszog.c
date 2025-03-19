#include <stdio.h>
#include <stdbool.h>

bool haromszoge(int a, int b, int c)
{
    if (a+b>c||a+c>b||c+b>a)
    {
        return true;
    }
    return false;
}

int main()
{
    if (haromszoge(5,7,3))
    {
        printf("Szerkeszthető\n");
    }
    else
    {
        printf("Nem szerkeszthető\n");
    }
    
    return 0;
}