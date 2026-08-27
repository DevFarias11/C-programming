#include <stdio.h>

int somar(int a, int b) { 
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir (int a,int b){
    return a / b;
}


int main () { 


    int opcao;
printf("1 - SOMAR \n");
printf("2 - SUBTRAIR \n");
printf("3 - MULTIPLICAR \n");
printf("4 - DIVIDIR \n");
 printf("Escolha uma opcao: \n");
    scanf("%d", &opcao);


printf(" Digite o primeiro numero: \n");
    int a;
    scanf("%d", &a);

printf(" Digite o segundo numero: \n");
    int b;
    scanf("%d", &b);

    printf("O resultado e: \n");

switch (opcao) {
    case 1:
    printf("%d \n",somar(a, b));
    break;
    case 2:
    printf("%d \n",subtrair(a,b));
    break;
    case 3:
    printf("%d \n",multiplicar(a,b));
    break;
    case 4:
    printf("%d \n",dividir(a,b));
}

}