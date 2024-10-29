#include <stdio.h>

int main() {
    int n1, numero;

printf("Digite um numero inteiro e tecle ENTER\n");
scanf("%d", &n1);

numero = n1 % 2;
if(numero == 0){
    printf("o numero %d é Par\n", n1);
} else {
    printf("o numero %d é Impar\n", n1);
}

return 0;
}