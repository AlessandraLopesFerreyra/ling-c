/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    int soma;
    int divi;
    int mult;
    int sub;
    char comando;
    printf("digite o primeiro numero:");
    scanf("%d",&a);
    printf("digite o segundo numero:");
    scanf("%d",&b);
    do{
        printf("digite um comando:");
        scanf(" %c",&comando);
    }while(comando != 's' && comando !='d' && comando !='f' && comando !='m');
    
    if(comando == 's'){
        soma=a+b;
        printf("seu resultado é:%d", soma);
    }else if(comando == 'f'){
        sub=a-b;
         printf("seu resultado é:%d", sub);
    }else if(comando == 'd'){
        divi=a/b;
         printf("seu resultado é:%d", divi);
    }else if(comando == 'm'){
        mult=a*b;
         printf("seu resultado é:%d", mult);
    }else{
        printf("apresente um comando existente.");
    }
   

    return 0;
}
