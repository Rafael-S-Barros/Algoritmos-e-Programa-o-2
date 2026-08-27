#include <stdio.h>

float calcular_s(int n) {
    int i;
    float s = 0;

    for (i = 1; i <= n; i++) {
        s = s + 1.0 / i;
    }

    return s;
}

int main() {
    int n;
    float resultado;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &n);

    resultado = calcular_s(n);

    printf("O valor de S e: %.2f\n", resultado);

    return 0;
}