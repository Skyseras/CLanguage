#include <unistd.h>
#include <stdio.h>
#include <math.h>

/*
Challenge 11 : Circonférence d'un rectangle
Écrivez un programme pour trouver la circonférence d'un rectangle. 
Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur.
La formule pour la circonférence d'un rectangle = 2*(longueur + largeur).
*/

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