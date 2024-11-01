#include <stdio.h>

    int main(){ 
        int ano,bissexto = 0;
        for (ano = 1920 ; ano <= 2024 ; ano++){
            if(ano % 4 == 0){
            bissexto++;
        }
    }
    printf("A quantidade de anos bissextos de 1920 até 2024 é %d.\n", bissexto);
    return 0;
}