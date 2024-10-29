#include <stdio.h>

int main() {

int placa;

printf("Escreva o numero final da placa do seu carro que te direi que dia terá rodizio.\n");
scanf("%d", &placa); 

    if(placa == 1 || placa == 2){
        printf("O rodizio é Segunda-feira\n");
    } else if(placa == 3 || placa == 4) {
        printf("O rodizio é Terça-feira\n");
    } else if(placa == 5 || placa == 6) {
        printf("O rodizio é Quarta-feira\n");
    } else if(placa == 7 || placa == 8) {
        printf("O rodizio é Quinta-feira\n");
    } else if(placa == 9 || placa == 0) {
        printf("O rodizio é Sexta-feira\n");
    } else {
        printf("Eu pedi para que digitasse o ultimo numero da placa.\n");
}
}