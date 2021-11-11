#include <unistd.h>
#include <stdio.h>
#include <math.h>

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