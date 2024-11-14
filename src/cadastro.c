#include <stdio.h>

    void cadastro(char *nome, char *email, int *idade){

        FILE *arquivo;
        arquivo = fopen("files/cadastro.txt", "a");
        fprintf(arquivo, "Nome: %s\n", nome);
        fprintf(arquivo, "Email: %s\n", email);
        fprintf(arquivo, "Idade: %d\n", *idade);
        fprintf(arquivo , "------------------------------\n");
        fclose(arquivo);
        printf("Arquivo criado.\n");
    }
    int main(){

        char nome[30];
        char email[50];
        int idade;
        printf("Boa tarde, digite o seu nome e tecle ENTER.\n");
            scanf("%[^\n]s", nome);
        printf("Agora digite o seu email e tecle ENTER.\n");
            scanf("%s", email);
        printf("Por fim, a sua idade e tecle ENTER.\n");
            scanf("%d", &idade);
            cadastro(nome, email, &idade);

        return 0;
    }