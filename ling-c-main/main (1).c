#include <stdio.h>

int main()
{
   
   int idade;
   printf("digite idade");
   scanf("%d", &idade);
   if (idade<=12){
   printf("criança");
   }else if (idade<=18){
          printf("adolescente");
   }else if(idade<=60){
       printf("adulto");
   }else if(idade<=61){
       printf("idoso");
   }

    return 0;
}