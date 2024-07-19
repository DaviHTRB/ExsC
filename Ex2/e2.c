#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("escreva um numero qualquer");
    scanf("%d", &a);
    if(a%2){
       if(a<0){
         printf("%d = impar e negativo", a);
       }else{
        if(a==0){
            return 0;
        }else{
             printf("%d = impar e positivo", a);
        }
       }
    }
    
    system("PAUSE");
}