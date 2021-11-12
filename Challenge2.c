#include <unistd.h>
#include <stdio.h>

/*
Challenge 2 : Conversion du °C au °F
Ecrivez un programme qui demande la température en Fahrenheit 
et la transforme en degré Celsius
La formule : F = (C*1.8)+32
*/

int main()
{
    float T;
    printf("Entrez la temperature en C : ");
    scanf("%f", &T);
    T = (T * 1.8) + 32;
    printf("La temperature en F est : %f", T);
    return 0;
}