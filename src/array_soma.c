#include <stdio.h>
    int main(){
        int par[] = {13,8,23,95,47,14,10,45,165};
        int a = 0,soma = 0;
            while(a <= 9){
                soma = soma + par[a];
            a++;
        }
    printf("%d\n", soma);
}