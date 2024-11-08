#include <stdio.h>

/* int maior(int n1, int n2){

    int rs;
    if(n1 > n1){
        rs = n1;
    } else {
        rs = n2;
    }
    return rs;

}  */

int maiordosdois(int n1, int n2){
    int m,i;

          if(n1 > n2){
                printf("O numero maior é %d.\n", n1);
        } if(n2 > n1) {
                printf("O numero maior é %d.\n", n2);
        } if(n1 == n2) {
                printf("Os numeros são iguais.\n");
        } else {
                printf("Eu pedi dois numeros\n");
        }
        return 0;
    }


char FouM(char genero){
    if (genero == 'f' || genero == 'F'){
        printf("Feminino\n");
    } else if (genero == 'm'|| genero == 'M'){
        printf("Masculino\n");
    } else {
        printf("Sexo invalido.\n");
    }
}

// Void não tem saida, ele já executa lá
void vogal(char letra){

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("É uma vogal.\n");
    } else {
        printf("É uma consoante.\n");
    }
}

void salario(float salario){
float mais, valor, aumento;

    if(salario <= 280){
        mais = salario * 0.2;
        valor = salario * 0.2;
        aumento = 20;

    } else if(salario <= 700) {
        mais = salario * 0.15;
        valor = salario + mais;
        aumento = 15;

    } else if( salario <= 1500) {
        mais = salario * 0.1;
        valor = salario + mais;
        aumento = 10;

    } else if(salario > 1500){
        mais = salario * 0.05;
        valor = salario + mais;
        aumento = 5;
    } 

    printf("Seu salário inicial era R$%.2f.\n", salario);
    printf("Seu salário teve um aumento de %.0f%.\n", aumento);
    printf("O valor aumentado foi de R$%.2f.\n", mais);
    printf("Seu salário atual é R$%.2f.\n", valor);
}