#include <unistd.h>
#include <stdio.h>

int main(){
    
    char Nom[25];
    char Prenom[25];
    char Age[25];
    char Sexe[25];
    char Tel[25];

    printf("Quel est votre Nom:\n");
    scanf("%s", Nom);

    printf("Quel est votre Prenom:\n");
    scanf("%s", Prenom);

    printf("Quel est votre Age:\n");
    scanf("%s", Age);

    printf("Quel est votre Sexe:\n");
    scanf("%s", Sexe);

    printf("Quel est votre Numero de Telephone:\n");
    scanf("%s", Tel);

    printf("Nom et Prenom: %s %s \nAge: %s \nSexe: %s \nNumero de telephone: %s\n", Nom, Prenom, Age, Sexe, Tel);

    return 0;
}