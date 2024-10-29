#include <stdio.h>

    int main() {
    
        int ano, bissexto;

        printf("Digite um ano e te direi se ele é bissexto ou não.\n");
        scanf("%d", &ano);

        bissexto = ano % 4;

        if(bissexto == 0){
            printf("%d é um ano bissexto.\n", ano);
        } else {
            printf("%d não é um ano bissexto.\n", ano);
        }
    }