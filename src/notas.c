#include <stdio.h>

    int main() {
//Float é pra trabalhar com casas decimais    
    float n1, n2, n3, n4,soma, resultado;

    printf("Digite sua primeira nota: \n");
        scanf("%f", &n1);
    printf("Digite sua segunda nota: \n");
        scanf("%f", &n2);
    printf("Digite sua terceira nota: \n");
        scanf("%f", &n3);
    printf("Digite sua quarta nota: \n");
        scanf("%f", &n4);

    soma = n1 + n2 + n3 + n4;
    resultado = soma / 4;

    printf("Sua nota final é: %.1f\n", resultado); 
}