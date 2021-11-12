#include <unistd.h>
#include <stdio.h>
#include <math.h>

/*
Challenge 10 : Circonférence d'un cercle
Écrivez un programme pour trouver la circonférence d'un cercle. 
Prenez le rayon du cercle en entrée de l'utilisateur.
La formule pour, la circonférence du cercle = 2πr ; où r est le rayon.
*/

int main(){
    const float pi=3.14;
    float r,cercle;
    printf("Entrez la valeur du rayon : ");
    scanf("%f", &r);
    cercle = 2*pi*r;
    printf("La circonference du cercle au rayon %f est : %f", r, cercle);
    return 0;
}