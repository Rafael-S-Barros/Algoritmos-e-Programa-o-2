#include <stdio.h>

int main(){
    int nota1;
    int nota2;
    int nota3;
    int media;
    
    printf("Digite a primeira nota: ");
    scanf("%i", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%i", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%i", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("A média das notas é: %i\n", media);

    return 0;
}