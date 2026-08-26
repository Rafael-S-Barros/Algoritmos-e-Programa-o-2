#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void validarSorteio(int sorteio, int num){
    if (num == sorteio){
        printf("Parabéns! Você acertou o número sorteado!!!!\n");
    }
    else if (num < sorteio){
        printf("Você chutou muito baixo!\n");
    }
    else{
        printf("Você chutou muito alto!\n");
    }
}

int main(){
    srand(time(NULL));

    int sorteio = rand() % 100 + 1;
    int num = 0;
    int tentativas = 0;

    do{
        do{
            printf("Tente acertar o número sorteado entre 1 e 100: ");
            scanf("%d", &num);

            if (num < 1 || num > 100){
                printf("Digite um valor válido entre 1 e 100");
            }

        } while (num < 1 || num > 100);

        tentativas += 1;
        validarSorteio(sorteio, num);

    } while (tentativas < 5 && num != sorteio);

    printf("Número de tentativas: %d\n", tentativas);
    if (num != sorteio){
        printf("Você excedeu o número máximo de tentativas\n");
        printf("O número sorteado era: %d\n", sorteio);
    }
    
    return 0;
}