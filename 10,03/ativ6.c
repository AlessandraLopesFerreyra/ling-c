#include <stdio.h>

int main(){
    int n = 1;
    int soma = 0;
    while(n<=50){
        soma = soma + n;
        n++;
    }
    printf("%d é a soma dos números de 1 a 50", soma);
}