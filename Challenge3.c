#include <unistd.h>
#include <stdio.h>

int main(){
    float Distance;
    printf("Entrez la distance en metre : ");
    scanf("%f", &Distance);
    Distance = Distance/(1000*1.609);
    printf("La distance en Mile est : %f", Distance);
    return 0;
} 