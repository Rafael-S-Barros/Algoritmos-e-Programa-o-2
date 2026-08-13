#include <stdio.h>

int main(){
    int salarioM;
    int salarioB;
    int resultado;

    printf("Digite o seu salario bruto: ");
    scanf("%i", &salarioB);

    printf("Digite o salario minimo: ");
    scanf("%i", &salarioM);

    resultado = salarioB / salarioM;

    printf("Você recebe %i salários mínimos\n", resultado);
    return 0;
}