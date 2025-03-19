#include <stdio.h>

int is_even(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}



int main()
{

    printf("%d\n",is_even(2));

    return 0;
}