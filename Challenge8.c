#include <unistd.h>
#include <stdio.h>

int main(){
    float a;
    float b;
    float c;
    float d;
    float somme;
    float moyenne;
    printf("Entrez la valeur de a : ");
    scanf("%f", &a);
    printf("Entrez la valeur de b : ");
    scanf("%f", &b);
    printf("Entrez la valeur de c : ");
    scanf("%f", &c);
    printf("Entrez la valeur de d : ");
    scanf("%f", &d);
    somme = a+b+c+d;
    moyenne = somme/4;
    printf("La somme des valeurs est : %f\n", somme);
    printf("La moyenne des valeurs est : %f\n", moyenne);
    return 0;
}