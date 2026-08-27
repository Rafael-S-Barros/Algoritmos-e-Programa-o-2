#include <stdio.h>

float calcular_peso_ideal(float altura, char sexo) {
    float peso_ideal;

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = 72.7 * altura - 58;
    }
    else {
        peso_ideal = 62.1 * altura - 44.7;
    }

    return peso_ideal;
}

int main() {
    float altura;
    char sexo;
    float peso;

    printf("Digite sua altura(m): ");
    scanf("%f", &altura);

    printf("Digite seu sexo, M para masculino ou F para feminino: ");
    scanf(" %c", &sexo);

    peso = calcular_peso_ideal(altura, sexo);

    printf("Seu peso ideal e: %.2f kg\n", peso);

    return 0;
}