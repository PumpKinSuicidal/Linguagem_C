#include <stdio.h>

    int main() {

        int mes, n1, n2;
        printf("Digite o numero de um mês:\n");
        scanf("%d", &n1);
        printf("Digite o numero de um dia:\n");
        scanf("%d", &n2);

    if (n1 == 1 || n1 == 2 || n1 == 3 || n1 == 12) {
        if(n1 == 12 && n2 < 21) {
            printf("A estação do ano é Primavera.\n");
        } else {
        printf("A estação do ano é Verão.\n");
}
    } else if(n1 == 4 || n1 == 5 || n1 == 6 || n1 == 3) {
        if(n1 == 3 && n2 < 21){
            printf("A estação do ano é Verão.\n");
        } else {
        printf("A estação do ano é Outono.\n");
}
    } else if(n1 == 7 || n1 == 8 || n1 == 9 || n1 == 6) {
        if(n1 == 6 && n2 < 21) {
            printf("A estação do ano é Outono.\n");
        } else {
        printf("A estação do ano é Inverno.\n");
}
    } else if(n1 == 10 || n1 == 11 || n1 == 12 || n1 == 9) {
        if(n1 == 9 && n2 < 21) {
            printf("A estação do ano é Inverno.\n");
        } else {
        printf("A estação do ano é Primavera.\n");
}
    } else {
        printf("Eu pedi o numero do mês.");
    }

}