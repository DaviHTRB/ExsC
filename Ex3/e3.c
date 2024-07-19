#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("escreva 2 valores A e B e tranformarei um no outro");
    scanf("%d", &a);
    scanf("%d", &b);
    a = a+b;
    b = a-b;
    a = a - b;
    printf("A = %d e B = %d", a, b);
    system("PAUSE");
}