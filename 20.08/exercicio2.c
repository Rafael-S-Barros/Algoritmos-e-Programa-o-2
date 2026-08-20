#include <stdio.h>

void calcularIMC (float peso, float altura){
    float imc = peso / (altura * altura);
    printf("O IMC de uma pessoa com peso %f kg e altura %f m é igual a %f.\n", peso, altura, imc);
        
}

int main(){
    float peso, altura;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    calcularIMC(peso, altura);

    return 0;
}