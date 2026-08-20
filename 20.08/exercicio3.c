#include <stdio.h>

void testarAprovacao (float media, float frequencia){
    if (frequencia < 75){
        printf("Reprovado por falta. \n");
    }
    else if (frequencia >= 75 && media >= 7.5){
        printf("Aprovado. \n");
    }
    else {
        printf("Exame Final. \n");
    }
}

int main(){

    float media, frequencia;

    printf("Digite a sua media: ");
    scanf("%f", &media);
    printf("Digite a sua frequencia: ");
    scanf("%f", &frequencia);

    testarAprovacao(media, frequencia);

    return 0;
}