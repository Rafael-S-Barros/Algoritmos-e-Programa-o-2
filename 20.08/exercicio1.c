#include <stdio.h>

int main(){
    int num1;
    int num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%i", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%i", &num2);

    printf("A soma é: %i\n", num1 + num2);
    printf("A subtração é: %i\n", num1 - num2);
    printf("A multiplicação é: %i\n", num1 * num2);
    printf("A divisão é: %i\n", num1 / num2);

    return 0;
}