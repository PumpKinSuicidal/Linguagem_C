#include <stdio.h>

int main() {
    int num1;
    int num2;
    int soma;
    int mult;
    int div;
    int sub;
    int resto;

    printf("Digite um numero: \n");
    scanf("%d", &num1);
    printf("Digite outro numero: \n");
    scanf("%d", &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    div = num1 / num2;
    mult = num1 * num2;
/* Resto de operação */    
    resto = num1 % num2;

/* Assim que escreve quando é mais de um numero */
    printf("A soma de %d com %d é igual: %d\n", num1, num2, soma );
    printf("A subtração de %d com %d é igual: %d\n", num1, num2, sub );
    printf("A multiplicação de %d com %d é igual: %d\n", num1, num2, mult );
    printf("A divisão de %d com %d é igual: %d\n", num1, num2, div );
    printf("O resto da divisão de %d com %d é igual: %d\n", num1, num2, resto );
}