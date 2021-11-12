#include <unistd.h>
#include <stdio.h>

/*
Challenge 7 : Calcule et affichage résultat en format décimal
a et b sont deux entiers saisies au clavier, calculez et affichez 
a+b, a-b, a*b, a/b, a%b en format décimal, et en soignant 
l’interface homme/machine. (a/b donne le quotient de la division, 
a%b donne le reste de la division)
*/

int main(){
    int a;
    int b;
    printf("Entrez la valeur de a :");
    scanf("%d", &a);
    printf("Entrez la valeur de b :");
    scanf("%d", &b);
    printf("a + b = %d\na - b = %d\na * b = %d\na / b = %d\na %% b = %d\n", a+b, a-b, a*b, a/b, a%b);
    return 0;
}