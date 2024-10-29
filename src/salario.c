#include <stdio.h>

int main() {

    float n1, mult1, mult2, mult3, descontos, salario;

    printf("Digite seu salário bruto e pressione ENTER: \n");
    scanf("%f", &n1);

    mult1 = n1 * 0.06;
    mult2 = n1 * 0.07;
    mult3 = n1 * 0.08;

    descontos = mult1 + mult2 + mult3;
    salario = n1 - descontos;

    printf("Seu salário liquido é: %.2f\n", salario);
    printf("Oque foi descontado do salário bruto foi: %.2f\n", descontos);
}