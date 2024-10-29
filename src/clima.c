#include <stdio.h>

    int main() {

        int mes, n1;
        printf("Digite o numero de um mês que te direi a estação predominante dele:\n");
        scanf("%d", &n1);

    if (n1 == 1 || n1 == 2 || n1 == 3) {
        printf("A estação do ano predominante é Verão.\n");

    } else if(n1 == 6 || n1 == 4 || n1 == 5) {
        printf("A estação do ano predominante é Outono.\n");

    } else if(n1 == 9 || n1 == 7 || n1 == 8) {
        printf("A estação do ano predominante é Inverno.\n");

    } else if(n1 == 12 || n1 == 10 || n1 == 11) {
        printf("A estação do ano predominante é Primavera.\n");

    } else {
        printf("Eu pedi o numero do mês.");
    }

}