#include <stdio.h>
#include <string.h>
#include "prog1.h"

#define x (sizeof(int))
#define y (sizeof(char))

int main()
{

    printf("%ld\n",(x * x * x * x * x) + (x * x * x * x * x) - (x * x) - x - x+y);

    return x - x;
}
