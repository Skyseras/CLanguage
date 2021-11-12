#include <unistd.h>
#include <stdio.h>
#include <math.h>

/*
Challenge 9 : Distance entre deux points
Ecrivez un programme C pour trouver la distance entre deux points donnés.
La formule de distance est dérivée du théorème de Pythagore. Pour trouver 
la distance entre deux points (x1, y1) et (x2, y2), il suffit d'utiliser 
les coordonnées de ces paires ordonnées et d'appliquer la formule. Formule de distance
Supposons que nous ayons deux points M et N, dont les coordonnées sont respectivement 
(x1, y1) et (x2, y2). Leur distance peut être représentée par MN et peut être calculée 
selon la formule ci-dessous,
Le premier point (M):- (x1, y1) Deuxième point (N) : (x2, y2) 
Distance (MN):- √((x2-x1)² + (y2-y1)²) Exemple:- M = (4, 8) N = (12, 14)
 Alors la distance entre M et N est MN = √((12-4)² + (14-8)²) = √(64 + 36) = √(100) = 10
*/

int main(){
    float x1,y1,x2,y2,MN;
    printf("Entrez la cordonnee x1 : \n");
    scanf("%f", &x1);
    printf("Entrez la cordonnee y1 : \n");
    scanf("%f", &y1);
    printf("Entrez la cordonnee x2 : \n");
    scanf("%f", &x2);    
    printf("Entrez la cordonnee y2 : \n");
    scanf("%f", &y2);
    MN = sqrt(pow((x2-x1),2) + pow((y2-y1),2)); 
    printf("La distance entre M et N est : %f",MN);
    return 0;
}