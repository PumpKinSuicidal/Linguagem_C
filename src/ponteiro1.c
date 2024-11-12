#include <stdio.h>

int main(){
    int idade = 18;
    // declaração da variação de ponteiro.
    int *pidade = &idade;
    printf("A idade é %d e está em %p e %p com o valor %d.\n", idade, &idade, pidade,*pidade);

    return 0;
}