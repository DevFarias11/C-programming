
int ehPar(int num) {
    if (num % 2 == 0) {
        return 1; // É par
    } else {
        return 0; // É ímpar
    }
}
int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    no main
    if (ehPar(numero) == 1) {
        printf("O numero %d eh PAR (Retorno: 1)\n", numero);
    } else {
        printf("O numero %d eh IMPAR (Retorno: 0)\n", numero);
    }
    return 0;
}