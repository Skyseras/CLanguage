#include <unistd.h>
#include <stdio.h>

int main(){
    float Distance;
    printf("Entrez la distance en Mile : ");
    scanf("%f", &Distance);
    Distance = Distance*1.609*1000;
    printf("La distance en Metre est : %f", Distance);
    return 0;
}