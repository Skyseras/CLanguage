#include <unistd.h>
#include <stdio.h>

/*
Challenge 4 : Conversion du Mile au Km
Ecrivez un programme qui demande la distance en Mile et la transforme en Metre
La formule : Km = Mile/1.609
(tenir en compte la conversion métrique)
*/

int main(){
    float Distance;
    printf("Entrez la distance en Mile : ");
    scanf("%f", &Distance);
    Distance = Distance*1.609*1000;
    printf("La distance en Metre est : %f", Distance);
    return 0;
}