#include <unistd.h>
#include <stdio.h>

int main(){
    float T;
    printf("Entrez la temperature en F : ");
    scanf("%f", &T);
    T = (T - 32)/ 1.8;
    printf("La temperature en C est : %f", T);
    if (T < 0){
        printf(" Et votre temperature est très froide\n");
    }
    else if (T < 25){
        printf(" Et votre temperature est froid\n");
    }
    else if (T < 35){
    printf(" Et votre temperature est chaud\n");
    }
    else{
        printf(" Et votre temperature est très chaud\n");
    }
    return 0;
}