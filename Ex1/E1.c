#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    printf("Escreva 3 valores");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("A soma de A+B = %d; sendo ", a+b);
    if(a+b > c){
        printf("maior que %d", c);
    }else{
        if(a+b == c){
            printf("igual a %d", c);
        }else{
            printf("menor que %d", c);
        }
    }
    system("PAUSE");
}