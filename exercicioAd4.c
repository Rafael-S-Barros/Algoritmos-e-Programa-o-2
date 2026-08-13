#include <stdio.h>

int main(){
    int comprimento;
    int largura;
    int area;

    printf("Digite o comprimento do terreno: ");
    scanf("%i", &comprimento);
    printf("Digite a largura do terreno: ");
    scanf("%i", &largura);
    area = comprimento * largura;
    printf("A área do terreno é: %i\n", area);

    return 0;
}