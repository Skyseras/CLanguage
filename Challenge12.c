#include <unistd.h>
#include <stdio.h>

/*
Challenge 12 : Nombre entier à trois chiffres en ordre inverse
Écrivez un programme C pour afficher un nombre entier à trois chiffres 
dans l'ordre inverse sans utiliser la boucle. Par exemple, si le nombre 
entier est 234, son inverse est 432.
*/

int main(){
    int N, I;
    printf("Entrez un nombre entier à trois chiffres : ");
    scanf("%d", &N);
    I=(I*10)+(N%10);
    N=N/10;
    I=(I*10)+(N%10);
    N=N/10;
    I=(I*10)+(N%10);
    N=N/10;
    printf("Votre nombre entier a l'inverse est : %d", I);
    return 0;
}