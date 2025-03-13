#include <stdio.h>

int kerulet(int a,int b)
{
    return (a+b)*2;
}
int terulet(int a, int b)
{
    return a*b;
}



int main()
{
    int a,b;
    printf("Kérem az egyik oldalt: ");
    scanf("%d",&a);
    printf("Kérem a másik oldalt: ");
    scanf("%d",&b);

    printf("Kerület: %d\n",kerulet(a,b));
    printf("terulet: %d\n",terulet(a,b));



    return 0;
}