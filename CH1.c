int main(int argc, char **argv){
    
    char Nom[20];
    char Prenom[20];
    char Age[20];
    char Sexe[20];
    char Tel[20];

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

    printf("Nom et Prenom: %s %s, Age: %s, Sexe: %s, Numero de telephone: %s\n", Nom, Prenom, Age, Sexe, Tel);

    return 0;
}