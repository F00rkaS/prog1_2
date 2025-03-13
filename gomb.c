#include <stdio.h>
#include <math.h>
# define M_PI		3.14159265358979323846

double get_double()
{
    double x;
    printf("Kérem a gömb sugarát: ");
    scanf("%le",&x);
    return x;
}

double felszin(double r)
{
    return 4*r*r*M_PI;
}

double terfogat(double r)
{
    return (4.0/3.0)*r*r*r*M_PI;
}



int main()
{
    double r=get_double();
    

    printf("Felszín: %le\n",felszin(r));
    printf("Térfogat: %le\n",terfogat(r));



    return 0;
}