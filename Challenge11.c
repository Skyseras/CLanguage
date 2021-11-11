#include <unistd.h>
#include <stdio.h>
#include <math.h>

int main(){
    float L,l,rectangle;
    printf("Entrez la longueur de votre rectangle : ");
    scanf("%f", &L);
    printf("Entrez la largeur de votre rectangle : ");
    scanf("%f", &l);
    rectangle = 2*(L + l);
    printf("La circonference de votre rectangle est : %f", rectangle);
    return 0;
}