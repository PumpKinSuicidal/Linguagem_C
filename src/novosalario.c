#include <stdio.h>
#include "../lib/desafio.h"

int main(){
    int n1;

    printf("Digite o seu salário atual.\n");
    scanf("%d", &n1);
    salario(n1);

    return 0;
}