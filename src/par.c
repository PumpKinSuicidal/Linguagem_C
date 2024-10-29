#include <stdio.h>

int main() {
int numero, n1;

printf("Escreva um numero inteiro que te direi se ele é impar ou par.\n");
scanf("%d", &n1);


numero = n1 % 2;

    if(numero == 1){
        printf("O numero %d é impar\n", n1);
    }
    if(numero == 0){
        printf("O numero %d é par\n", n1);
    }

}
