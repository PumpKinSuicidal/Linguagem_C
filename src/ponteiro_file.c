#include <stdio.h>

    int main(){

        FILE *arquivo;
        // (a) - adicionar, (w) - Escrever, (r) - Ler.
        arquivo = fopen("files/texto.txt", "a");
        fprintf(arquivo, "Batata frita.\n");
        fclose(arquivo);
        printf("Arquivo criado.\n");
        return 0;
    }