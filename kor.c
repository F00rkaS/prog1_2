#include <stdio.h>
#include <math.h>
# define M_PI		3.14159265358979323846


double kerulet(int r)
{
    return 2 * r * M_PI;
}

double terulet(double r)
{
    return r * r * M_PI;
}



int main()
{
    double r;
    printf("Kérem a kör sugarát: ");
    scanf("%lf",&r);

    printf("Kerület: %.2lf\n",kerulet(r));
    printf("terulet: %.2lf\n",terulet(r));



    return 0;
}