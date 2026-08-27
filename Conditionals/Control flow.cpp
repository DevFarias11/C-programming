#include <stdio.h>


#define NOTA 3

int main () {

    float v[NOTA];
    int i;
    float media = 0.0;
    float soma = 0.0;


    printf("----------------------------------------------\nEsta e a consulta escolar de aprovacao e reprovacao\n----------------------------------------------");

    printf("\nInforme a nota de cada ciclo:");

    for (int i = 0; i < NOTA; i++) {
        scanf("%f", &v[i]);
        soma  += v[i];
    }
    for (int i = 0; i < NOTA; i++) {
        printf("\n Essas foram as suas notas: %.2f",v[i]);
    }


    media = soma / NOTA;
    printf("\nSua Media : %.2f", media);

    if (media >= 6) {
        printf("\n APROVADO!");
    } else if ( media > 3) {
        printf("\n EM RECUPERACAO!");
    } else {
        printf("\n REPROVADO!");
    }



    return 0;
}