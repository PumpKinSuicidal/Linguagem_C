#include <stdio.h>

int main(){

    char nome[20];

    printf("Digite seu nome e tecle ENTER.\n");
    // [^\n] Inclui a cadeia completa inclundo os espaços
    scanf("%[^\n]s",&nome);
    printf("Olá, %s. Sejá bem vindo/a!!!\n",nome);

    return 0;
}