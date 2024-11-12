#include <stdio.h>

    void cadastro(char *nome, char *email, char *idade){

        FILE *arquivo;
        arquivo = fopen("files/cadastro.txt", "a");
        fprintf(arquivo, nome);
        fprintf(arquivo, email);
        fprintf(arquivo, idade);
        fclose(arquivo);
        printf("Arquivo criado.\n");
    }
    int main(){

        char nome[30];
        char email[50];
        char idade[3];
        printf("Boa tarde, digite o seu nome e tecle ENTER.\n");
            scanf("%[^\n]s", nome);
        printf("Agora digite o seu email e tecle ENTER.\n");
            scanf("%s", email);
        printf("Por fim, a sua idade e tecle ENTER.\n");
            scanf("%s", idade);
            cadastro(nome, email, idade);

        return 0;
    }