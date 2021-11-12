#include <unistd.h>
#include <stdio.h>

/*
Challenge 6 : Conversion du Fahrenheit au Celsius
Ecrivez un programme qui demande la température en Fahrenheit 
et la transforme en degré Celsius
La formule : C = (F-32)/1.8
*/

int main(){
    float T;
    printf("Entrez la temperature en F : ");
    scanf("%f", &T);
    T = (T - 32)/ 1.8;
    printf("La temperature en C est : %f", T);
    return 0;
}