#include <unistd.h>
#include <stdio.h>
#include <math.h>

int main(){
    const float pi=3.14;
    float r,cercle;
    printf("Entrez la valeur du rayon : ");
    scanf("%f", &r);
    cercle = 2*pi*r;
    printf("La circonference du cercle au rayon %f est : %f", r, cercle);
    return 0;
}