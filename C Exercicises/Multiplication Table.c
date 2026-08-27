#include <stdio.h>




int tabu(int n) { 
    for(int i = 0; i <= 10;i++) {
        printf("%d x %d = %d \n",n,i,n*i);
    }
}







int main () {



printf("Digite o numero que deseja saber a tabuada!:\n");

int n;

scanf("%d",&n);

printf("A tabuada do numero %d e: \n",n);
tabu(n);


}





