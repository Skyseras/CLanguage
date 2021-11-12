#include <unistd.h>
#include <stdio.h>

/*
Challenge 13 : Affichage de la valeur octale et hexadécimale équivalente
Écrivez un programme C pour afficher la valeur équivalente en octal et en hexadécimal. 
Entrez un nombre entier et affichez sa valeur équivalente en octal et en hexadécimal.
*/

int main(){
    int Valeur;
    printf("Entrez un nombre entier : ");
    scanf("%d", &Valeur);
    printf("Votre valeur en Octale est : %o\n", Valeur);
    printf("Votre valeur en Hexadecimale est : %x", Valeur);
    return 0;
}