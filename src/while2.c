#include <stdio.h>

    int main(){

        int vinte = 0;
        printf("Escreva o numero 20.\n");
        scanf("%d", &vinte);
        // != é diferente.
            while(vinte != 20){
                printf("Eu disse 20.\n");
                scanf("%d", &vinte);
            }
        printf("Obrigado!!!\n");

        return 0;
    }