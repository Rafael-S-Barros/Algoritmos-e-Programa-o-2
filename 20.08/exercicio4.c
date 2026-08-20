#include <stdio.h>

void verificarTriangulo (int a, int b, int c){
    if (a < b + c && b < a + c && c < a + b){
        apresentarResultado(1);
    }
    else {
        apresentarResultado(0);
    }
}

void apresentarResultado (int resultado){
    if (resultado == 1){
        printf("É possível formar um triângulo com os lados informados. \n");
    }
    else {
        printf("Não é possível formar um triângulo com os lados informados. \n");
    }
}

int main(){
    int a, b, c;

    printf("Digite o primeiro lado: ");
    scanf("%d", &a);
    printf("Digite o segundo lado: ");
    scanf("%d", &b);
    printf("Digite o terceiro lado: ");
    scanf("%d", &c);

    verificarTriangulo(a, b, c);

    return 0;
}