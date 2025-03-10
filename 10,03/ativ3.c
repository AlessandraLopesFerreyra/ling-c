#include <stdio.h>

int main()
{
    int n=0;
    while(n<=20 && n>=0){
        if(n%2 == 0){
            printf("%d",n);
        }
        n=n+1;
    }

    return 0;
}
