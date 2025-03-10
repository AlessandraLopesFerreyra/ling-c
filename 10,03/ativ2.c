#include <stdio.h>

int main()
{
    int a;
    printf("digite um numero:");
    scanf("%d", &a );
    
    if(a>0){
        printf("Positivo");
    }else if(a<0){
        printf("Negativo");
    }else{
        printf("Zero");
    }

    return 0;
}
