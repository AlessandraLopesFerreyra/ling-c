#include <stdio.h>

int main()
{
    int n=5;
    int resp;
    printf("digite um numero de 0 a 10:");
    scanf("%d", &resp);
    
    if(resp!=n){
        printf("Errada!");
    }else{
        printf("Certa!");
    }

    return 0;
}
