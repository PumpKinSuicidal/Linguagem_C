#include <stdio.h>

    int main() {
//Float é pra trabalhar com casas decimais    
    float n1, n2, soma, div;

    printf("Digite um numero e pressione ENTER: \n");
    // %f para numeros Float - & é pra alocar a informação em n1
    scanf("%f", &n1);
    printf("Digite outro numero e pressione ENTER: \n");
    scanf("%f", &n2);

    soma = n1 + n2;
    div = n1 / n2;

// .2f na saida é pra sair apenas duas cazas decimais
    printf("O resultado da soma de %.2f com %.2f é: %.2f \n", n1, n2, soma );
    printf("O resultado da divisão de %.2f com %.2f é: %.2f \n", n1, n2, div );
    }