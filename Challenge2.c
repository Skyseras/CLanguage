#include <unistd.h>
#include <stdio.h>

int main()
{
    float T;

    printf("Entrez la temperature en C : ");
    scanf("%f", &T);

    T = (T * 1.8) + 32;

    printf("La temperature en F est : %f", T);

    return 0;
}