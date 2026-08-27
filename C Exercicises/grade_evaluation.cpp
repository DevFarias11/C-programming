#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 3

int main() {
    float media;
    float soma = 0.0;
    float vetor[TAMANHO];

    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite a nota %d desejada: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / TAMANHO;

    printf("\nEssa e a media das notas: %.2f\n", media);

    return 0;
}
