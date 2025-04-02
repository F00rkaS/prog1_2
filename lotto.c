#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int db;
    int min; 
    int max;

    printf("Hány db random számot kérsz?\n");
    scanf("%d", &db);

    printf("Alsó határ: ");
    scanf("%d", &min);

    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &max);

    printf("A generált számok: ");

    srand(time(NULL)); 
    for (int i = 0; i < db; i++) 
    {
        int szam = rand() % (min - max + 1) + min;
        printf("%d ", szam);
    }
    printf("\n");

    return 0;
}