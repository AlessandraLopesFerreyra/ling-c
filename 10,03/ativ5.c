
#include <stdio.h>

int main()
{
   
    int soma=0;
    int n=1;
    
    while(n<=50) {
        soma=soma+n;
        n++;
    }
    printf("a soma vale %d", soma);

    return 0;
}