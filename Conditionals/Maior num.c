#include <stdio.h>




int maiorNum(int a, int b) {

    if (a > b) {
        return a;
    } else {
        return b;
    }
}



int main () { 

int a, b;

printf(" Digite os numeros para saber o maior: \n");
scanf("%d",&a);
scanf("%d", &b);

printf(" O maior numero e: %d \n", maiorNum(a, b));

}
