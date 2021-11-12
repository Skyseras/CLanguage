#include <unistd.h>
#include <stdio.h>

/*
Challenge 3 : Conversion du Mile au Km
Ecrivez un programme qui demande la distance en Metre et la transforme en Mile
La formule : Mile = Km*1.609
(tenir en compte la conversion métrique)
*/

int main(){
    float Distance;
    printf("Entrez la distance en metre : ");
    scanf("%f", &Distance);
    Distance = Distance/(1000*1.609);
    printf("La distance en Mile est : %f", Distance);
    return 0;
} 