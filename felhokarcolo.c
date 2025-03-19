#include <stdio.h>

int felho(int n, int tomb[])
{
    int ossz = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (tomb[i]>tomb[i+1])
        {
            ossz= ossz + (tomb[i] - tomb[i+1]);
        }
        else
        {
            ossz= ossz + (tomb[i+1] - tomb[i]);
        }
        
    }
    return ossz;
}


int main()
{
    int szamok[5] = {9, 8, 6, 4, 3};
    int meret=5;

    int külosszeg = felho(meret, szamok);
    printf("A felhőkarccolo külömbségének összege: %d\n",külosszeg);

    return 0;
}