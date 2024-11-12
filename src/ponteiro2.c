#include <stdio.h>

void dados(int *x, int *y){

    int soma = *x + *y;
    printf("(X) esta em %p e (Y) esta em %p.\n", x, y);
    printf("O resultado é %d.\n", soma);
}
int main(){

    int a = 10, b = 5;
    printf("(A) esta em %p e (B) esta em %p.\n", &a, &b);
    dados(&a,&b);

    return 0;
}