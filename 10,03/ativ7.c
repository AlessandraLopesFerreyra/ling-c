#include <stdio.h>

int main(){
   int idade;
   printf("Digite sua idade: ");
   scanf("%d", &idade);
   if(idade<=12){
       printf("vc é uma criança!!");
   }else if(idade<=18){
        printf("vc é um adolecente!");
   }else if(idade<=59){
       printf("vc é um adulto!");
   }else{
       printf("vc é um idoso!");
   }
   return 0;
}


