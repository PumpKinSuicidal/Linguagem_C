#include <stdio.h>

    int main() {
        float n1, n2, n3, n4, sub1, sub2, resultado;

    printf("Digite sua velocidade inicial: \n");
        scanf("%f", &n1);
    printf("Digite sua velocidade final: \n");
        scanf("%f", &n2);

        sub1 = n1 - n2;

    printf("Digite o tempo inicial: \n");
        scanf("%f", &n3);
    printf("Digite o tempo final: \n");
        scanf("%f", &n4);

        sub2 = n3 - n4;
        resultado = sub1 / sub2;

    printf("Sua velocidade media escalar é de: %.1f\n", resultado );
    }