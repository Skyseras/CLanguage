#include <unistd.h>
#include <stdio.h>

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