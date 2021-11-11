#include <unistd.h>
#include <stdio.h>

int main(){
    float T;
    printf("Entrez la temperature en F : ");
    scanf("%f", &T);
    T = (T - 32)/ 1.8;
    printf("La temperature en C est : %f", T);
    return 0;
}