#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void validarSorteio(int sorteio, int num){
    if (num == sorteio){
        printf("Parabéns! Você acertou o número sorteado!!!!\n");
    }
    else if (num < sorteio){
        printf("Você chutou muito baixo! O valor correto é %d.\n", sorteio);
    }
    else{
        printf("Você chutou muito alto! O valor correto é %d.\n", sorteio);
    }
}

int main(){
    srand(time(NULL));

    int sorteio = rand() % 100 + 1;
    int num = 0;

    do{
        printf("Tente acertar o número sorteado entre 1 e 100: ");
        scanf("%d", &num);
    }
    while (num < 1 || num > 100);
    validarSorteio(sorteio, num);
    
    return 0;
}