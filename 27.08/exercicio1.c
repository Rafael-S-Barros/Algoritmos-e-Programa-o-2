#include <stdio.h>
#include <string.h>

int idade;
int resultado[30];

int solicitar_idade() {
    printf("Digite sua idade: ");
    scanf("%d", &idade);
}

void classificar_nadador(int idade, char resultado[]) {
    if (idade >= 5 && idade <= 7){
        strcpy(resultado, "Infantil A");
    }
    else if (idade >= 8 && idade <= 10){
        strcpy(resultado, "Infantil B");
    }
    else if (idade >= 11 && idade <= 13){
        strcpy(resultado, "Juvenil A");
    } 
    else if (idade >= 14 && idade <= 17){
        strcpy(resultado, "Juvenil B");
    }
    else if (idade >= 18){
        strcpy(resultado, "Adulto");
    }
}

void apresentar_resultado(char resultado[]) {
    printf("O nadador se enquadra na categoria: %s\n", resultado);
}

int main () {

    solicitar_idade();
    classificar_nadador(idade, resultado);
    apresentar_resultado(resultado);
    return 0;
}